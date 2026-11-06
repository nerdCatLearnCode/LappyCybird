#include "Player.h"


Player::Player()
	: PlayerTexture(new Engine::RenderTexture(global.renderer, IMG_Load("D:/CppProject/LappyCybird/LappyCybird/Assets/Textures/Player.png")))
{
	transform.scale = { 1.0f, 1.0f };

	transform.size = { 64 * transform.size.w * global.proportionWidth, 64 * transform.size.h * global.proportionHeight};

	transform.pos.x = global.WIDTH / 2 - transform.size.w / 2;
	transform.pos.y = global.HEIGHT / 2 - transform.size.h / 2;

	transform.src =
	{
		10,
		13
	};

	transform.src_size =
	{
		44,
		39
	};
	
}

void Player::Update()
{
	
}

void Player::Render()
{
	
}

void Player::UpdateEvent()
{

}

Player::~Player()
{
	delete PlayerTexture;
}