#include "ButtonStart.h"

ButtonStart::ButtonStart()
	: TextureButtonStart(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/menu.png")))
{
	std::cout << "ButtonStart created\n";
	std::cout << "Texture = " << TextureButtonStart << '\n';

	transform.scale =
	{
		1,
		1
	};

	transform.size = {
		128 * transform.scale.x * global.proportionWidth,
		64 * transform.scale.y * global.proportionHeight
	};

	transform.pos.x =
		(static_cast<float>(global.WIDTH) / 2) - (transform.size.w / 2);

	float y = (0 + 50) * global.proportionHeight;

	transform.pos.y = y;


	transform.src =
	{
		0,
		0
	};

	transform.src_size =
	{
		96,
		32
	};

	std::cout << global.renderer << std::endl;
}

ButtonStart::~ButtonStart()
{
	delete TextureButtonStart;
}

void ButtonStart::Render()
{
	Engine::RenderTexture* MainTexture = TextureButtonStart;

	SDL_FRect src =
	{
		transform.src.x,
		transform.src.y,
		transform.src_size.w,
		transform.src_size.h
	};

	SDL_FRect dst =
	{
		transform.pos.x,
		transform.pos.y,
		transform.size.w,
		transform.size.h
	};

	MainTexture->Render(src, dst);
}

void ButtonStart::Update()
{
	mouse.Update();

	if (mouse.ButtonPressed(SDL_BUTTON_LEFT))
	{
		if (mouse.GetX() >= transform.pos.x &&
			mouse.GetX() <= transform.pos.x + transform.size.w &&
			mouse.GetY() >= transform.pos.y &&
			mouse.GetY() <= transform.pos.y + transform.size.h)
		{
			std::cout << "ButtonStart clicked\n";
			global.engine->GetGame().PlayLevel("game");
		}
	}
}

void ButtonStart::UpdateEvent()
{

}