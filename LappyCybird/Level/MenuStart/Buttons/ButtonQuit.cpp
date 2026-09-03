#include "ButtonQuit.h"


ButtonQuit::ButtonQuit()
	: TextureButtonQuit(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/menu.png")))
{
	transform.scale =
	{
		1,
		1
	};

	transform.size =
	{
		51 * 2 * transform.scale.x * global.proportionWidth,
		16 * 2 * transform.scale.y * global.proportionHeight
	};

	transform.pos =
	{
		(static_cast<float>(global.WIDTH) / 2) - (transform.size.w / 2),
		(50 * 3 + (transform.size.h * 2)) * global.proportionHeight
	};

	transform.src =
	{
		80,
		0
	};

	transform.src_size =
	{
		51,
		16
	};
}

ButtonQuit::~ButtonQuit()
{
	delete TextureButtonQuit;
}

void ButtonQuit::Render()
{
	Engine::RenderTexture* texture = TextureButtonQuit;

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

	texture->Render(src, dst);
}

void ButtonQuit::Update()
{
	mouse.Update();

	if (mouse.ButtonPressed(SDL_BUTTON_LEFT))
	{
		if (mouse.GetX() >= transform.pos.x && mouse.GetX() <= transform.pos.x + transform.size.w &&
			mouse.GetY() >= transform.pos.y && mouse.GetY() <= transform.pos.y + transform.size.h)
		{
			global.running = false;
		}
	}
}

void ButtonQuit::UpdateEvent()
{

}