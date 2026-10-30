using System.Numerics;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private Rigidbody2D rb;
    private SpriteRenderer sr;
    private Animator an;
    private PlayerLootController plc;
    [SerializeField] private float horizontalSwimForce = 3f;
    [SerializeField] private float verticalSwimForce = 3f;
    [SerializeField] private float horizontalMaxSpeed = 8f;
    [SerializeField] private float verticalMaxSpeed = 8f;
    [SerializeField] private float sprintMultiplier = 2f;
    [SerializeField] private float walkSpeed = 1f;
    [SerializeField] private float gravity = 200f;
    private float Sprint_hsf;
    private float Sprint_vsf;
    private float Sprint_hms;
    private float Sprint_vms;
    [SerializeField] private bool isOnLand; // feet touching boat. before water, on jump, this is false
    private bool isAboveWater; // different from isOnLand. cares only about elevation
    private float jumpMS;
    private bool sprintAnimationSet;
    private PlayerStats playerStats;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
        an = GetComponent<Animator>();
        plc = GetComponent<PlayerLootController>();
        Sprint_hsf = horizontalSwimForce * sprintMultiplier;
        Sprint_vsf = verticalSwimForce * sprintMultiplier;
        Sprint_hms = horizontalMaxSpeed * sprintMultiplier;
        Sprint_vms = verticalMaxSpeed * sprintMultiplier;
        isOnLand = true;
        jumpMS = 0f;
        sprintAnimationSet = false;
        playerStats = GetComponent<PlayerStats>();
        isAboveWater = true;
    }

    void OnTriggerEnter2D (Collider2D ship)
    {
        if (!ship.CompareTag("Ship"))
        {
            return;
        }

        // when you enter, put player on the ship
        UnityEngine.Vector3 startingPos = new UnityEngine.Vector3(-40f, 25f, 0f);
        transform.position = startingPos;
        isOnLand = true;
        an.SetTrigger("IdleTrigger");

        // tell loot controller that we entered the ship
        bool lootChanged = plc.OnReturnToBoat();

        // if loot changed, tell AudioManager surafaced with loot, and update is Above Water
        // this is done here so that this.Update doesn't try to play up for air
        // all other case, surface changes while we are in swimming mode
        this.isAboveWater = true;
        AudioManager.instance.ChangeSurface(isAboveWater, lootChanged);
    }

    void OnTriggerExit2D (Collider2D ship)
    {
        isOnLand = false; // change player controller mode
        an.SetTrigger("DiveTrigger"); // play animation
        jumpMS = 0.5f; // add a jump force for a half second
        AudioManager.instance.DiveTrigger(); // play dive sound
    }

    void OnLandPlayerController(float direction)
    {
        // only side to side movement is handled. no acceleration
        float velocity = walkSpeed * direction;
        rb.linearVelocity = new UnityEngine.Vector2(velocity, 0f);

        // set animator variables
        if (direction != 0)
        {
            an.SetBool("isWalking",true);
        }
        else
        {
            an.SetBool("isWalking",false);
        }

        // play walk sounds
        bool moving = direction != 0;
        AudioManager.instance.MoveUpdate(moving, false);
    }

    // Update is called once per frame
    void Update()
    {
        // get inputs
        float horizontalDirection = Input.GetAxisRaw("Horizontal");
        float verticalDirection = Input.GetAxisRaw("Vertical");
        bool spacePressed = Input.GetKey(KeyCode.Space);
        
        // if we are onland, disable sprint, or if we can't sprint
        if (isOnLand || !playerStats.CanSprint())
        {
            spacePressed = false;
        }

        // if our horizontalDirection is negative, flip the sprite
        if (horizontalDirection < 0)
        {
            sr.flipX = true;
        }
        else if (sr.flipX)
        {
            sr.flipX = false;
        }

        // update speed if space is pressed
        if (spacePressed)
        {
            verticalSwimForce = Sprint_vsf;
            horizontalSwimForce = Sprint_hsf;
            verticalMaxSpeed = Sprint_vms;
            horizontalMaxSpeed = Sprint_hms;
            if (verticalDirection < 0)
            {
                an.SetBool("isSprintingDown", true);
                sprintAnimationSet = true;
            }
            if (verticalDirection > 0)
            {
                an.SetBool("isSprintingUp", true);
                sprintAnimationSet = true;
            }
            if (verticalDirection == 0)
            {
                an.SetBool("isSprintingDown", false);
                an.SetBool("isSprintingUp", false);
            }

            // update player stats
            playerStats.UpdateWhenSprinting(Time.deltaTime);
        }
        else
        {
            playerStats.UpdateWhenNotSprinting(Time.deltaTime);
        }
        
        if (!spacePressed && horizontalSwimForce == Sprint_hsf)
        {
            verticalSwimForce /= sprintMultiplier;
            horizontalSwimForce /= sprintMultiplier;
            verticalMaxSpeed /= sprintMultiplier;
            horizontalMaxSpeed /= sprintMultiplier;
        }

        // unset sprint animator bools
        if (!spacePressed && sprintAnimationSet)
        {
            an.SetBool("isSprintingDown", false);
            an.SetBool("isSprintingUp", false);
        }

        // if onLand, we call a different movement handler
        if (isOnLand)
        {
            OnLandPlayerController(horizontalDirection);
            return;
        }

        // if we are jumping
        if (jumpMS > 0)
        {
            UnityEngine.Vector2 jumpForce = new UnityEngine.Vector2(0f, 1.5f * gravity * Time.deltaTime);
            rb.AddForce(jumpForce, ForceMode2D.Force);
            jumpMS -= Time.deltaTime;
        }

        // create a normalized vector for the input vector. scale by asymetric speed factors
        UnityEngine.Vector2 userDesiredForce = (new UnityEngine.Vector2(horizontalDirection, verticalDirection)).normalized;
        userDesiredForce.x = userDesiredForce.x * horizontalSwimForce * Time.deltaTime;
        userDesiredForce.y = userDesiredForce.y * verticalSwimForce * Time.deltaTime;

        // create gravity vector, and bool for if it should be applied
        UnityEngine.Vector2 gravityForce = new UnityEngine.Vector2(0f, -gravity * Time.deltaTime);
        bool aboveWaterSurface = transform.position.y > 24;

        // add the user force, and then clamp it so we don't speed off forever
        rb.AddForce(userDesiredForce, ForceMode2D.Force);
        if (aboveWaterSurface)
        {
            rb.AddForce(gravityForce, ForceMode2D.Force);
        }
        float clampedX = rb.linearVelocity.x;
        float clampedY = rb.linearVelocity.y;
        clampedX = Mathf.Clamp(clampedX, -horizontalMaxSpeed, horizontalMaxSpeed);
        clampedY = Mathf.Clamp(clampedY, -verticalMaxSpeed, verticalMaxSpeed);

        // update the velocity based on the clamped values
        rb.linearVelocity = new UnityEngine.Vector2(clampedX, clampedY);

        // if we have changed surface, change surface
        if (aboveWaterSurface != this.isAboveWater)
        {
            this.isAboveWater = aboveWaterSurface;
            AudioManager.instance.ChangeSurface(isAboveWater, false);
        }

        // deliver move update to AudioManager
        bool moving = horizontalDirection != 0 || verticalDirection != 0;
        bool sprinting = moving && spacePressed;
        AudioManager.instance.MoveUpdate(moving, sprinting);
    }
}
