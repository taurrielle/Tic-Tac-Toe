#include <sstream>
#include <iostream>

#include "SplashState.hpp"
#include "../DEFINITIONS.hpp"
#include "MainMenuState.hpp"

SplashState::SplashState(GameDataRef data) : _data(data)
{

}

void SplashState::Init()
{

}

void SplashState::HandleInput()
{
  sf::Event event;

  while(this->_data->window.pollEvent(event))
  {
    if(sf::Event::Closed == event.type)
    {
      this->_data->window.close();
    }
  }
}

void SplashState::Update(float dt)
{
  if(this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
  {
    this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
  }
}

void SplashState::Draw(float dt)
{
  sf::Color grey(35, 34, 34);
  this->_data->window.clear(grey);
  this->_data->window.draw(this->_background);
  this->_data->window.display();
}