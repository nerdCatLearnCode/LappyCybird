#include "GamePlay.h"

GamePlay::GamePlay()
	: Manager(global.renderer, *global.engine)
{
	std::cout << "GamePlay created\n";

	background = std::make_unique<Background>();

	GetNodes().push_back(std::move(background));
}

void GamePlay::Update()
{
	// Update game logic here
}

void GamePlay::Render()
{
	// Render game elements here
}