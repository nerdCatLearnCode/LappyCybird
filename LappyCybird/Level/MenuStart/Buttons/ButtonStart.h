#pragma once

#include <Engine/Node/Node.h>
#include <Instance.h>
#include <Engine/Texture/Texture.h>
#include <iostream>

class ButtonStart : public Engine::Node
{
public:
	ButtonStart();
	~ButtonStart();

	void Render() override;
	void Update() override;
	void UpdateEvent() override;

private:

	Engine::RenderTexture* TextureButtonStart;


	
};

