#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1136

#define SPLASH_STATE_SHOW_TIME 3

#define SPLASH_SCENE_BACKGROUND_FILEPATH "Resources/res/Splash_Background.png"
#define GAME_BACKGROUND_FILEPATH "Resources/res/Main_Menu_Background.png"
#define PAUSE_BACKGROUND_FILEPATH "Resources/res/Main_Menu_Background.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "Resources/res/Main_Menu_Background.png"

#define MAIN_MENU_TITLE_PATH "Resources/res/Game_Title.png"

#define MAIN_MENU_PLAY_BUTTON "Resources/res/Play_Button.png"
#define MAIN_MENU_PLAY_BUTTON_OUTER "Resources/res/Play_Button_Outer.png"
#define PAUSE_BUTTON "Resources/res/Pause_Button.png"
#define RESUME_BUTTON "Resources/res/Resume_Button.png"
#define HOME_BUTTON "Resources/res/Home_Button.png"
#define RETRY_BUTTON "Resources/res/Retry_Button.png"

#define X_PIECE_FILEPATH "Resources/res/X.png"
#define O_PIECE_FILEPATH "Resources/res/O.png"
#define X_WINNING_PIECE_FILEPATH "Resources/res/X_Win.png"
#define O_WINNING_PIECE_FILEPATH "Resources/res/O_Win.png"

#define GRID_SPRITE_FILEPATH "Resources/res/Grid.png"

#define X_PIECE 8
#define O_PIECE 0
#define EMPTY_PIECE -8
#define PLAYER_PIECE X_PIECE
#define AI_PIECE O_PIECE

#define STATE_PLAYING 98
#define STATE_PAUSED 97
#define STATE_WON 96
#define STATE_LOSE 95
#define STATE_PLACING_PIECE 94
#define STATE_AI_PLAYING 93
#define STATE_DRAW 92

#define TIME_BEFORE_SHOWING_GAME_OVER 3

#endif