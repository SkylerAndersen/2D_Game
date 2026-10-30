using UnityEngine;
using System.Collections.Generic;
using TMPro;
using UnityEngine.SceneManagement;

public class PlayerLootController : MonoBehaviour
{
    [SerializeField] private GameObject fish;
    [SerializeField] private TextMeshProUGUI textGUI;
    private List<GameObject> allLoot;
    private int score;
    private PlayerController playerController;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        UnityEngine.Vector3 pos = new UnityEngine.Vector3(0f,0f,0f);
        UnityEngine.Quaternion rot = UnityEngine.Quaternion.identity;
        allLoot = new List<GameObject>();
        for (int i = 0; i < 10; i++)
        {
            allLoot.Add(Instantiate(fish, pos, rot));
        }

        score = 0;
        PlayerStats.coins = 0;
    }

    public bool OnReturnToBoat ()
    {
        // track old score
        int oldScore = score;

        // don't run if there is no loot
        if (allLoot == null)
        {
            return false; // we most certainly surfaced with no loot
        }

        // find all fish
        for (int i = allLoot.Count-1; i >= 0; i--)
        {
            FishController fc = allLoot[i].GetComponent<FishController>();

            // if caught fish: add to score and delete
            if (fc != null && fc.beenCaught)
            {
                score += 100;
                PlayerStats.coins = score;
                Destroy(allLoot[i], 0f);
                allLoot.RemoveAt(i);
            }
        }

        // update score
        textGUI.text = "Coins: " + score.ToString("#,0");

        // if we have just run out of loot, game is over
        if (allLoot.Count == 0)
        {
            SceneManager.LoadScene("0_gameover_scene");
        }

        // if we updated score, return true, else false
        if (score != oldScore)
        {
            AudioManager.instance.RewardTrigger();
            return true;
        }

        return false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
