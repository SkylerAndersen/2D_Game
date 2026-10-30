using UnityEngine;

public class FishController : MonoBehaviour
{
    [SerializeField] private Rigidbody2D rb;
    [SerializeField] private SpriteRenderer sr;
    [SerializeField] private BoxCollider2D bc;
    [SerializeField] private LineRenderer lr;
    private Transform player;
    [SerializeField] private float minX;
    [SerializeField] private float maxX;
    [SerializeField] private float minY;
    [SerializeField] private float maxY;
    [SerializeField] private float moveForce;
    [SerializeField] private float maxMoveSpeed;
    [SerializeField] private float gravity = 300f;
    [SerializeField] private float caughtFollowSpeed = 2f;
    private float currDirectionTTL;
    private UnityEngine.Vector2 directedMoveForce;
    public bool beenCaught;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        float startingX = Random.Range(minX,maxX);
        float startingY = Random.Range(minY,maxY);
        UnityEngine.Vector3 startingPos = new UnityEngine.Vector3(startingX, startingY, 0f);
        transform.position = startingPos;
        rb = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
        bc = GetComponent<BoxCollider2D>();
        lr = GetComponent<LineRenderer>();
        lr.positionCount = 2;
        lr.enabled = false;
        currDirectionTTL = 0;
        beenCaught = false;
        player = GameObject.FindWithTag("Player").GetComponent<Transform>();
    }

    // once caught, collisions and movement are disabled. We will trail the player until distance is 1
    void BeenCaughtUpdate()
    {
        // draw line to the player
        lr.enabled = true;
        lr.SetPosition(0, transform.position);
        lr.SetPosition(1, player.position);

        // find distance to the player
        float targX = player.position.x;
        float targY = player.position.y;
        float x = transform.position.x;
        float y = transform.position.y;
        float distance = Mathf.Sqrt((x-targX)*(x-targX) + (y-targY)*(y-targY));
        if (distance <= 1f)
        {
            return;
        }

        // scale targX to be inbetween player x and current x, but one unit away from the player
        // do the same for targY. This is done with pythagorean theorem
        targX += (x-targX) / distance;
        targY += (y-targY) / distance;

        // change position over time
        UnityEngine.Vector3 newPosition = new UnityEngine.Vector3(targX, targY, 0f);
        transform.position = UnityEngine.Vector3.Slerp(transform.position, newPosition, caughtFollowSpeed * Time.deltaTime);
    }

    // Update is called once per frame
    void Update()
    {
        // check if fish has been caught, then call another function instead
        if (beenCaught)
        {
            BeenCaughtUpdate();
            return;
        }

        // check if the player is nearby, and pressing R
        float xDist = transform.position.x - player.position.x;
        float yDist = transform.position.y - player.position.y;
        float distance = Mathf.Sqrt(xDist * xDist + yDist * yDist);
        if (distance < 2f && Input.GetKeyDown(KeyCode.R))
        {
            beenCaught = true;
            rb.bodyType = RigidbodyType2D.Kinematic; // disable physics
            bc.enabled = false; // disable collider
            AudioManager.instance.CatchFishTrigger(); // play catch sound
            return;
        }

        // if we are outside of the range, and moving away, pick a new direction. soft bounds
        float currX = transform.position.x;
        float currY = transform.position.y;
        bool outsideRanges = currX < minX || currX > maxX || currY < minY || currY > maxY;
        if (currDirectionTTL > 0 && outsideRanges) // there must be a direction chosen, and we must be outside
        {
            // are we going wrong way?
            bool goingWrongWay = (currX > maxX && directedMoveForce.x > 0) ||
                                (currX < minX && directedMoveForce.x < 0) ||
                                (currY > maxY && directedMoveForce.y > 0) ||
                                (currY < minY && directedMoveForce.y < 0);

            // if so, time to live for current direction is 0, and we now choose a new direction
            if (goingWrongWay)
            {
                currDirectionTTL = 0;
            }
        }

        // determine desired direction
        if (currDirectionTTL <= 0) {
            // create desired movement force (random direction unit vector, scaled by force value)
            directedMoveForce = new UnityEngine.Vector2(Random.Range(-1f,1f),Random.Range(-1f,1f));
            directedMoveForce = directedMoveForce.normalized * moveForce;

            // reset clock for its persistence
            currDirectionTTL = Random.Range(0f, 3f);

            // change to face the new direction
            if (directedMoveForce.x < 0)
            {
                sr.flipX = true;
            }
            else
            {
                sr.flipX = false;
            }
        }

        // create gravity vector, and bool for if it should be applied
        UnityEngine.Vector2 gravityForce = new UnityEngine.Vector2(0f, -gravity);
        bool aboveWaterSurface = transform.position.y > 24;

        // apply the force
        rb.AddForce(directedMoveForce, ForceMode2D.Force);
        if (aboveWaterSurface)
        {
            rb.AddForce(gravityForce, ForceMode2D.Force);
        }

        // clamp the velocity
        float clampedX = Mathf.Clamp(rb.linearVelocity.x, -maxMoveSpeed, maxMoveSpeed);
        float clampedY = Mathf.Clamp(rb.linearVelocity.y, -maxMoveSpeed, maxMoveSpeed);
        UnityEngine.Vector2 clampedVelocity = new UnityEngine.Vector2(clampedX, clampedY);
        rb.linearVelocity = clampedVelocity;

        // count down time traveling in this direction
        currDirectionTTL -= Time.deltaTime;
    }
}
