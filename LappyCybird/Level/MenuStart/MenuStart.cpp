#include "MenuStart.h"

MenuStart::MenuStart()
	: Manager(global.renderer, *global.engine)
{
	start = std::make_unique<ButtonStart>();


	GetNodes().push_back(std::move(start));
}

void MenuStart::Render()
{

}

void MenuStart::Update()
{

}