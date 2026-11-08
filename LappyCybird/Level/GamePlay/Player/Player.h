#pragma once

#include <Engine/Node/Node.h>
#include <Engine/Texture/Texture.h>
#include <Engine/Animated/Animated.h>
#include <Instance.h>
#include <SDL3/SDL.h>

class Player : public Engine::Node
{
public:
	Player();
	~Player();

	void Update() override;
	void Render() override;
	void UpdateEvent() override;

private:
	Engine::RenderTexture* PlayerTexture;
	Engine::Animated* PlayerAnimated;
};

