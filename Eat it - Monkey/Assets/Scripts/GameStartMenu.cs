using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class GameStartMenu : MonoBehaviour {

    #region Constants

    private const string AUDIO = "audio";
    private const string MUSIC = "music";

    #endregion

    public enum State {OFF,ON};

    public Toggle isAudioOn;
    public Toggle isMusicOn;
    public AudioSource eatSound;
    public AudioSource gameMusic;

    #region Mono API

    void Start()
    {
        int stateAudio = GetPref(AUDIO, (int)State.ON);
        int stateMusic = GetPref(MUSIC, (int)State.ON);
        isAudioOn.isOn = Convert.ToBoolean(stateAudio);
        isMusicOn.isOn = Convert.ToBoolean(stateMusic);
    }

    void Update() {
        if (!isAudioOn.isOn) {
            OnToggleAudio(State.OFF);
         } else if(isAudioOn.isOn) {
            OnToggleAudio(State.ON);
         }
        if(!isMusicOn.isOn) {
            OnToggleMusic(State.OFF);
        } else if(isMusicOn.isOn) {
            OnToggleMusic(State.ON);
        }
    }

    #endregion

    #region GameStartMenu API

    public void StartGame() {
        SceneManager.LoadScene("Game scene");
    }

    public void OnToggleAudio(State state) {
        SetAudio(state);
    }

    public void OnToggleMusic(State state) {
        SetMusic(state);
    }

    private void SetAudio(State state) {
        SetPref(AUDIO, (int)state);
        eatSound.volume = GetPref(AUDIO, (int)state);
    }

    private void SetMusic(State state) {
        SetPref(MUSIC, (int)state);
        gameMusic.volume = GetPref(MUSIC, (int)state);
    }

    #endregion

    #region Pref Setters

    private void SetPref(string key, int value) {
        PlayerPrefs.SetInt(key, value);
    }

    private int GetPref(string key, int value = 0) {
        return PlayerPrefs.GetInt(key, value);
    }

    #endregion
}
