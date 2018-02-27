#ifndef PAUSESTATE_H
#define PAUSESTATE_H

#include <SFML/Graphics.hpp>
#include "../Base/State.hpp"
#include "../Game.hpp"

class PauseState : public State
{
public:
  PauseState(GameDataRef data);

  void Init();
  void HandleInput();
  void Update(float dt);
  void Draw(float dt);

private:
  GameDataRef _data;
  sf::Sprite _background;
  sf::Sprite _resumeButton;
  sf::Sprite _homeButton;
};

#endif