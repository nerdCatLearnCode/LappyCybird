#define SDL_MAIN_USE_CALLBACKS 1

#include <SDL3/SDL_main.h>
#include <iostream>
#include <Instance.h>
#include <Level/MenuStart/MenuStart.h>
#include <Level/GamePlay/GamePlay.h>

std::unique_ptr<MenuStart> menuStart;
std::unique_ptr<GamePlay> gamePlay;

SDL_AppResult SDL_AppInit(void** appstate, int argc, char* argv[])
{
	if (!SDL_Init(SDL_INIT_VIDEO))
	{
		std::cout << SDL_GetError() << std::endl;
		return SDL_APP_FAILURE;
	}
	global.WIDTH = global.HEIGHT = 10;

	global.window = SDL_CreateWindow("Lappy CyBird",
		global.WIDTH,
		global.HEIGHT,
		SDL_WINDOW_RESIZABLE);

	global.renderer = SDL_CreateRenderer(global.window, nullptr);

	SDL_MaximizeWindow(global.window);

	SDL_GetWindowSize(global.window,
		&global.WIDTH,
		&global.HEIGHT);

	global.proportionHeight =
		static_cast<float>(global.HEIGHT) / 720.0f;

	global.proportionWidth =
		static_cast<float>(global.WIDTH) / 1080.0f;

	global.engine = new Engine::Engines(global.renderer);

	menuStart = std::make_unique<MenuStart>();
	gamePlay = std::make_unique<GamePlay>();

	global.engine->GetGame().AddLevel("menu", std::move(menuStart));
	global.engine->GetGame().AddLevel("game", std::move(gamePlay));
	global.engine->GetGame().PlayLevel("menu");

	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppEvent(void* appstate, SDL_Event* event)
{
	if (event->type == SDL_EVENT_QUIT || !global.running)
		return SDL_APP_SUCCESS;

	switch (event->key.key)
	{
	case SDLK_ESCAPE:
		return SDL_APP_SUCCESS;
	default:
		break;
	}
	

	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppIterate(void* appstate)
{
	SDL_RenderClear(global.renderer);

	global.engine->Initialize();

	SDL_RenderPresent(global.renderer);

	return SDL_APP_CONTINUE;
}

void SDL_AppQuit(void* appstate, SDL_AppResult result)
{
	delete global.engine;

	SDL_DestroyWindow(global.window);
	SDL_DestroyRenderer(global.renderer);
	SDL_Quit();
}