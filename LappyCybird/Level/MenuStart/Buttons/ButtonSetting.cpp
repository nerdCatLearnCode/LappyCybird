#include "ButtonSetting.h"

ButtonSetting::ButtonSetting()
	: TextureButtonSetting(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/menu.png")))
{
	transform.scale =
	{
		1,
		1
	};

	transform.size =
	{
		128 * transform.scale.x * global.proportionWidth,
		64 * transform.scale.y * global.proportionHeight
	};

	transform.pos =
	{
		(static_cast<float>(global.WIDTH) / 2) - (transform.size.w / 2),
		(50 + transform.size.h + 50) * global.proportionHeight
	};

	transform.src =
	{
		0,
		32
	};

	transform.src_size =
	{
		96,
		32
	};


}

ButtonSetting::~ButtonSetting()
{
	delete TextureButtonSetting;
}

void ButtonSetting::Render()
{
	Engine::RenderTexture* texture;

	texture = TextureButtonSetting;

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

void ButtonSetting::Update()
{

}

void ButtonSetting::UpdateEvent()
{

}