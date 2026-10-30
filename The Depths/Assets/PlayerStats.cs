using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerStats : MonoBehaviour
{
    [SerializeField] private float maxAir = 20f;
    [SerializeField] private UnityEngine.UI.Image bubbleImageGUI;
    [SerializeField] private float maxLungCapacity = 7f;
    [SerializeField] private UnityEngine.UI.Image lungImageGUI;
    [SerializeField] private float maxSprint = 4f;
    [SerializeField] private UnityEngine.UI.Image sprintImageGUI;
    private float air;
    private float lungCapacity;
    private float sprint;
    private RectTransform bubbleImageTransform;
    private RectTransform lungCapacityTransform;
    private RectTransform sprintImageTransform;
    public static int coins;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        air = maxAir;
        bubbleImageTransform = bubbleImageGUI.GetComponent<RectTransform>();
        lungCapacity = 1f;
        lungCapacityTransform = lungImageGUI.GetComponent<RectTransform>();
        sprint = maxSprint;
        sprintImageTransform = sprintImageGUI.GetComponent<RectTransform>();
    }

    public void UpdateWhenSprinting(float timeDeltaTime)
    {
        // if no sprint, don't decrease further
        if (sprint <= 0)
        {
            return;
        }

        // decrease
        sprint -= timeDeltaTime;
        sprintImageTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, sprint * 100f);

        // if we have just decremented below 0, set a 3 second timeout
        if (sprint <= 0)
        {
            sprint -= 3f;
        }
    }

    public void UpdateWhenNotSprinting(float timeDeltaTime)
    {
        // if over max, don't increase
        if (sprint > maxSprint)
        {
            return;
        }

        // increase
        sprint += timeDeltaTime;
        sprintImageTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, sprint * 100f);
    }

    public bool CanSprint()
    {
        if (sprint > 0f)
        {
            return true;
        }

        return false;
    }

    // Update is called once per frame
    void Update()
    {
        // update breathing
        bool aboveWater = transform.position.y > 24;
        if (aboveWater)
        {
            air = maxAir;
        }
        else
        {
            // if underwater, air goes down
            air -= Time.deltaTime / lungCapacity;
            
            // lung capacity increases slowly
            if (lungCapacity < maxLungCapacity)
            {
                lungCapacity += Time.deltaTime / 30f;
            }
        }

        // update UI for breathing
        bubbleImageTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, air * 100f);

        // update lung UI
        lungCapacityTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, lungCapacity * 100f);

        // if out of air, die
        if (air <= 0)
        {
            SceneManager.LoadScene("0_gameover_scene");
        }
    }
}
