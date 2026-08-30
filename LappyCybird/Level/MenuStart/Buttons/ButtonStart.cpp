#include "ButtonStart.h"

ButtonStart::ButtonStart()
	: TextureButtonStart(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/menu.png")))
{
	std::cout << "ButtonStart created\n";
	std::cout << "Texture = " << TextureButtonStart << '\n';

	transform.scale =
	{
		4,
		4
	};

	transform.size = {
		128 * transform.scale.x * global.proportionWidth,
		64 * transform.scale.y * global.proportionHeight
	};

	transform.pos =
	{
		(static_cast<float>(global.WIDTH) / 2) - (transform.size.w / 2),
		(static_cast<float>(global.HEIGHT) / 2) - (transform.size.h / 2)
	};

	transform.src =
	{
		0,
		0
	};

	transform.src_size =
	{
		64,
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

}

void ButtonStart::UpdateEvent()
{

}