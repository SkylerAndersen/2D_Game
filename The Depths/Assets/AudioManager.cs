using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private AudioClip waves;
    [SerializeField] private AudioClip breathing;
    [SerializeField] private AudioClip walk;
    [SerializeField] private AudioClip swim;
    [SerializeField] private AudioClip sprint;
    [SerializeField] private AudioClip dive;
    [SerializeField] private AudioClip upForAir;
    [SerializeField] private AudioClip reward;
    [SerializeField] private AudioClip catchFish;
    public static AudioManager instance {get; private set;}
    private AudioSource ambientLine;
    private AudioSource movementLine;
    private AudioSource actionLine;
    private bool isAboveWater;
    private bool isMoving;
    private bool isSprinting;
    
    void Awake()
    {
        // gaurd against duplication
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        // set instance to this
        instance = this;
    }

    void Start()
    {
        // get the audio source components
        AudioSource[] audioSources = GetComponents<AudioSource>();
        ambientLine = audioSources[0];
        movementLine = audioSources[1];
        actionLine = audioSources[2];

        // set default ambient noise
        ambientLine.loop = true;
        ambientLine.clip = waves;
        ambientLine.Play();

        // ensure movement also loops
        movementLine.loop = true;

        // set default states
        isAboveWater = true;
        isMoving = false;
        isSprinting = false;
    }

    public void ChangeSurface(bool isAboveWater, bool surfacedWithLoot)
    {
        // change ambient sounds
        ambientLine.Stop();
        ambientLine.clip = (isAboveWater) ? waves : breathing;
        ambientLine.Play();

        // temporarily reset isMoving so walk updates can trigger change
        isMoving = false;
        isSprinting = false;
        
        // play the upForAir sound, unless we surfaced with loot
        if (isAboveWater && !surfacedWithLoot)
        {
            actionLine.Stop();
            actionLine.clip = upForAir;
            actionLine.Play();
        }

        // dive has been moved, because the dive sound should begin after leaving the trigger sound

        // update the surface as we know it
        this.isAboveWater = isAboveWater;
    }

    public void RewardTrigger()
    {
        // play reward action sound
        actionLine.Stop();
        actionLine.clip = reward;
        actionLine.Play();
    }

    public void CatchFishTrigger()
    {
        // play catch sound
        actionLine.Stop();
        actionLine.clip = catchFish;
        actionLine.Play();
    }

    public void DiveTrigger()
    {
        // play dive sound
        actionLine.Stop();
        actionLine.clip = dive;
        actionLine.Play();
    }

    public void MoveUpdate(bool isMoving, bool isSprinting)
    {
        // check if state is a change. if not, exit
        if (this.isMoving == isMoving && this.isSprinting == isSprinting)
        {
            return;
        }

        // check if all movement halted
        if (!isMoving && !isSprinting)
        {
            this.isMoving = isMoving;
            this.isSprinting = isSprinting;
            movementLine.Stop();
            return;
        }

        // if we are now sprinting, change to sprint
        if (isSprinting)
        {
            this.isSprinting = isSprinting;
            this.isMoving = isMoving; // incase movement began with sprint
            movementLine.Stop();
            movementLine.clip = sprint;
            movementLine.Play();
            return;
        }

        // all remaining cases are that we lost sprint, or started walking/swiming
        this.isSprinting = isSprinting;
        this.isMoving = isMoving;
        movementLine.Stop();
        movementLine.clip = (isAboveWater) ? walk : swim;
        movementLine.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
