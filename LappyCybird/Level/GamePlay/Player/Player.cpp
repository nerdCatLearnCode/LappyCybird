#include "Player.h"

using namespace Engine;

Player::Player()
	: PlayerTexture(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/texture/Player1-sheet.png")))
{
	transform.scale = { 3.0f, 3.0f };

	transform.size = { 50 * transform.scale.x * global.proportionWidth, 106 * transform.scale.y * global.proportionHeight};

	transform.pos.x = global.WIDTH / 2 - transform.size.w / 2;
	transform.pos.y = global.HEIGHT / 2 - transform.size.h / 2;

	transform.src =
	{
		0,
		0
	};

	transform.src_size =
	{
		53,
		106
	};


	PlayerAnimated = new Engine::Animated(transform.src_size.w, transform.src_size.h, 1024, 1024);

	PlayerAnimated->PlayRange(0, 0, 0, transform.src_size.h * 7, 7);
	PlayerAnimated->SetMode(Mode::Loop);


	animationManager.CreateAnimation(*PlayerAnimated);

	animationManager.Play(*PlayerAnimated);

	SDL_Log("chu quang minh");
	
}

void Player::Update()
{
	mouse.Update();
	rendering.Update();
	animationManager.Update();
}

void Player::Render()
{
	Engine::RenderTexture* sprite;

	SDL_FRect src =
		animationManager.GetAnimationPlaying().GetSrcRect();

	SDL_FRect dsl =
	{
		transform.pos.x,
		transform.pos.y,
		transform.size.w,
		transform.size.h
	};

	sprite = PlayerTexture;

	sprite->Render(src, dsl);
}

void Player::UpdateEvent()
{

}

Player::~Player()
{
	animationManager.RemoveAnimation(*PlayerAnimated);

	delete PlayerTexture;
	delete PlayerAnimated;


}