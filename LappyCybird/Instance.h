#pragma once

#include <SDL3/SDL_video.h>
#include <SDL3/SDL_render.h>
#include <Engine/Engine.h>
#include <memory>

struct Global
{
	SDL_Window* window;
	SDL_Renderer* renderer;

	Engine::Engines* engine;

	int WIDTH, HEIGHT;

	float proportionWidth, proportionHeight;

	bool running = true;
};

inline Global global;