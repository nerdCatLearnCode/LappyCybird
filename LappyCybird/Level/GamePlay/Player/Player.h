#pragma once

#include <Engine/Node/Node.h>
#include <Engine/Texture/Texture.h>
#include <Instance.h>

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
};

