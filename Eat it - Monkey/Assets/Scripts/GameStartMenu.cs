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
    public AudioSource bananaSplat;
    public Canvas settingsLeaf;

    #region Mono API

    private void Awake() {
        int stateAudio = GetPref(AUDIO, (int)State.OFF);
        int stateMusic = GetPref(MUSIC, (int)State.OFF);
        isAudioOn.isOn = Convert.ToBoolean(stateAudio);
        isMusicOn.isOn = Convert.ToBoolean(stateMusic);
        settingsLeaf.gameObject.SetActive(false);
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

    public void SettingsOpen() {
        settingsLeaf.gameObject.SetActive(true);
        settingsLeaf.gameObject.SetActive(true);
    }

    public void SettingsClose() {
        settingsLeaf.gameObject.SetActive(false);
    }

    public void OnToggleAudio(State state) {
        SetAudio(state);
    }

    public void OnToggleMusic(State state) {
        SetMusic(state);
    }

    private void SetAudio(State state) {
        SetPref(AUDIO, (int)state); 
        if (GetPref(AUDIO, (int)state) == 1) {
            eatSound.volume = 0f;
            bananaSplat.volume = 0f;
        } else if(GetPref(AUDIO, (int)state) == 0) {
            eatSound.volume = 0.1f;
            bananaSplat.volume = 0.2f;
        }
    }

    private void SetMusic(State state) {
        SetPref(MUSIC, (int)state);
        if (GetPref(MUSIC, (int)state) == 1) {
            gameMusic.volume = 0f;
        }
        else if(GetPref(MUSIC, (int)state) == 0){
            gameMusic.volume = 0.8f;
        }
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
