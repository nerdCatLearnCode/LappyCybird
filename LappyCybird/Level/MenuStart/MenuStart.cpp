#include "MenuStart.h"

MenuStart::MenuStart()
	: Manager(global.renderer, *global.engine)
{
	start = std::make_unique<ButtonStart>();
	setting = std::make_unique<ButtonSetting>();
	quit = std::make_unique<ButtonQuit>();
	background = std::make_unique<Background>();

	GetNodes().push_back(std::move(background));
	GetNodes().push_back(std::move(start));
	GetNodes().push_back(std::move(setting));
	GetNodes().push_back(std::move(quit));

}

void MenuStart::Render()
{

}

void MenuStart::Update()
{

}