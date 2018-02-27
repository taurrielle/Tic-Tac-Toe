#ifndef GAMEOVERSTATE_H
#define GAMEOVERSTATE_H

#include  <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"

class GameOverState : public State
{
public:
  GameOverState(GameDataRef data);

  void Init();
  void HandleInput();
  void Update(float dt);
  void Draw(float dt);

private:
  GameDataRef _data;

  sf::Sprite _retryButton;
  sf::Sprite _homeButton;
};

#endif