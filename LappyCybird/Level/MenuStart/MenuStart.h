#pragma once

#include <Engine/NodeManager/Manager.h>
#include <Instance.h>
#include "Buttons/ButtonStart.h"
#include <memory>

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
};

