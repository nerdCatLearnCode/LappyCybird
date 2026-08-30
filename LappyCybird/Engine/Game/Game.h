#pragma once

#include <NodeManager/Manager.h>
#include <LevelState/State.h>
#include <SDL3/SDL.h>
#include <memory>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <functional>

namespace Engine
{
	class Engines;

	class Game
	{
	public:
		Game(SDL_Renderer* renderer, Engine::Engines& engine);
		~Game() = default;

		void AddLevel(std::string name, std::unique_ptr<NodeManager::Manager> level);

		void PlayLevel(const std::string name);

		void RemoveLevel(std::string name);

		void AddFunctionPlayInPause(std::function<void()> func);

		void Pause();

		void Play();

		void Update();

	private:
		Engine::Engines* engine;

		std::map<std::string, std::unique_ptr<NodeManager::Manager>> levels;

		std::string playingLevel;

		State state;

		std::vector<std::function<void()>> funcInPause;

		SDL_Renderer* renderer;
	};
}
