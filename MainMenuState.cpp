#include "MainMenuState.hpp"
#include <sstream>
#include "DEFINITIONS.hpp"
#include "GameState.hpp"
#include <iostream>

MainMenuState::MainMenuState(GameDataRef data) : _data(data)
{

}

void MainMenuState::Init()
{
  this->_data->assets.LoadTexture("Background", MAIN_MENU_BACKGROUND_FILEPATH);
  this->_data->assets.LoadTexture("PlayButton", MAIN_MENU_PLAY_BUTTON);
  this->_data->assets.LoadTexture("PlayButtonOuter", MAIN_MENU_PLAY_BUTTON_OUTER);
  this->_data->assets.LoadTexture("GameTitle", MAIN_MENU_TITLE_PATH);

  this->_background.setTexture(this->_data->assets.GetTexture("Background"));
  this->_playButton.setTexture(this->_data->assets.GetTexture("PlayButton"));
  this->_playButtonOuter.setTexture(this->_data->assets.GetTexture("PlayButtonOuter"));
  this->_title.setTexture(this->_data->assets.GetTexture("GameTitle"));

  this->_playButton.setPosition( (SCREEN_WIDTH / 2) - (this->_playButton.getGlobalBounds().width / 2), (SCREEN_HEIGHT / 2) - (this->_playButton.getGlobalBounds().height / 2));
  this->_playButtonOuter.setPosition( (SCREEN_WIDTH / 2) - (this->_playButtonOuter.getGlobalBounds().width / 2), (SCREEN_HEIGHT / 2) - (this->_playButtonOuter.getGlobalBounds().height / 2));
  this->_title.setPosition( (SCREEN_WIDTH / 2) - (this->_title.getGlobalBounds().width / 2), this->_title.getGlobalBounds().height * 0.1 );
}

void MainMenuState::HandleInput()
{
  sf::Event event;

  while(this->_data->window.pollEvent(event))
  {
    if(sf::Event::Closed == event.type)
    {
      this->_data->window.close();
    }

    if(this->_data->input.IsSpriteClicked(this->_playButton, sf::Mouse::Left, this->_data->window))
    {
      this->_data->machine.AddState(StateRef(new GameState(_data)), true);
    }
  }
}

void MainMenuState::Update(float dt)
{

}

void MainMenuState::Draw(float dt)
{
  this->_data->window.clear();
  this->_data->window.draw(this->_background);
  this->_data->window.draw(this->_playButton);
  this->_data->window.draw(this->_playButtonOuter);
  this->_data->window.draw(this->_title);

  this->_data->window.display();
}