#ifndef SPLASHSTATE_H
#define SPLASHSTATE_H

#include <SFML/Graphics.hpp>
#include "../Base/State.hpp"
#include "../Game.hpp"

class SplashState : public State
{
public:
  SplashState(GameDataRef data);

  void Init();
  void HandleInput();
  void Update(float dt);
  void Draw(float dt);

private:
  GameDataRef _data;

  sf::Clock _clock;
  sf::Sprite _background;
};

#endif