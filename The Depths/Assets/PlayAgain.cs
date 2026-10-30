using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PlayAgain : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI textUI;
    public void OnClick()
    {
        SceneManager.LoadScene("0_main_scene");
    }

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        int coins = PlayerStats.coins;
        textUI.text = coins.ToString("#,0") + " Coins";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
