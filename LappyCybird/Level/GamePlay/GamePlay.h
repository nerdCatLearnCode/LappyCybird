#pragma once

#include <Engine/NodeManager/Manager.h>
#include <Instance.h>
#include <Level/Background/background.h>

class GamePlay : public NodeManager::Manager
{
public:
	GamePlay();
	~GamePlay() = default;
	void Update() override;
	void Render() override;

private:
	std::unique_ptr<Background> background;
};

