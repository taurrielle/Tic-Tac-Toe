#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"

int main()
{
  Game(SCREEN_WIDTH, SCREEN_HEIGHT, "Tic-Tac-Toe");
  return EXIT_SUCCESS;
}