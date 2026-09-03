#include "background.h"

Background::Background()
	: backgroundTexture(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/Background.png"))),
	backgroundTextureStar(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/parallax-space-far-planets.png"))),
	backgroundTexturePlanet(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/parallax-space-stars.png")))
{
	transform.scale = { 1, 1 };

	transform.pos = { 0, 0 };

	transform.size =
	{
		static_cast<float>(global.WIDTH),
		static_cast<float>(global.HEIGHT)
	};

	transform.src = { 0, 0 };
	transform.src_size =
	{
		272,
		160
	};
}


Background::~Background()
{
	delete backgroundTexture;
	delete backgroundTextureStar;
}

void Background::Render()
{
	Engine::RenderTexture* texture = backgroundTexture;
	

	SDL_FRect srcRect = { transform.src.x, transform.src.y, transform.src_size.w, transform.src_size.h };
	SDL_FRect dstRect = { transform.pos.x, transform.pos.y, transform.size.w, transform.size.h };


	texture->Render(srcRect, dstRect);
	backgroundTextureStar->Render(srcRect, dstRect);
	backgroundTexturePlanet->Render(srcRect, dstRect);
}

void Background::Update()
{
	// Update logic for the background (if any)
}

void Background::UpdateEvent()
{
	// Handle events related to the background (if any)
}