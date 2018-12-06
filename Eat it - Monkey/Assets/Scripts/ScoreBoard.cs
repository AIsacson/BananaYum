using UnityEngine;
using UnityEngine.UI;

public class ScoreBoard : MonoBehaviour {
    public Text scoreBoard;
    public GameController gameController;

    private void OnEnable()
    {
        gameController.OnAddedScore += ScoreChanged;
    }

    private void OnDisable()
    {
        gameController.OnAddedScore -= ScoreChanged;
    }

    void ScoreChanged(int score) {
        scoreBoard.text = score.ToString();
    }
}
