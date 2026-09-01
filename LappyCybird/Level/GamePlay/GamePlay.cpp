#include "GamePlay.h"

GamePlay::GamePlay()
	: Manager(global.renderer, *global.engine)
{
	std::cout << "GamePlay created\n";
}

void GamePlay::Update()
{
	// Update game logic here
}

void GamePlay::Render()
{
	// Render game elements here
}