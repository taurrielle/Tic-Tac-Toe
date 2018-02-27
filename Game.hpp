#ifndef GAME_H
#define GAME_H

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "Base/StateMachine.hpp"
#include "Base/AssetManager.hpp"
#include "Base/InputManager.hpp"

struct GameData
{
  StateMachine machine;
  sf::RenderWindow window;
  AssetManager assets;
  InputManager input;
};

typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
public:
  Game(int width, int height, std::string title);
  ~Game() {};

private:
  const float dt = 1.0f / 60.0f;
  sf::Clock _clock;

  GameDataRef _data = std::make_shared<GameData>();

  void Run();
};

#endif