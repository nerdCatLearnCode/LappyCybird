#pragma once

#include <Engine/NodeManager/Manager.h>
#include <Instance.h>
#include "Buttons/ButtonStart.h"
#include "Buttons/ButtonSetting.h"
#include "Buttons/ButtonQuit.h"
#include <memory>
#include <Level/Background/background.h>
#include <iostream>

class MenuStart 
	: public NodeManager::Manager
{
public:
	MenuStart();
	~MenuStart() = default;

	void Render() override;
	void Update() override;

private:
	std::unique_ptr<ButtonStart> start;
	std::unique_ptr<ButtonSetting> setting;
	std::unique_ptr<ButtonQuit> quit;
	std::unique_ptr<Background> background;
};

