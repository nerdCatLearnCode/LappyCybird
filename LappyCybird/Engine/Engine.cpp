#include "Engine.h"

namespace Engine
{
	Engines::Engines(SDL_Renderer* renderer)
		: collisionManager(),
		fps(),
		game(renderer, *this),
		renderer(renderer)
	{
	}
	void Engines::Initialize()
	{
		collisionManager.Update();
		fps.Update();
		game.Update();
	}

	const CollisionManager& Engines::GetCollisionManager() const
	{
		return collisionManager;
	}
	CollisionManager& Engines::GetCollisionManager()
	{
		return collisionManager;
	}
	const FPS& Engines::GetFPS() const
	{
		return fps;
	}
	FPS& Engines::GetFPS()
	{
		return fps;
	}

	Game& Engines::GetGame()
	{
		return game;
	}

	const Game& Engines::GetGame() const
	{
		return game;
	}
}