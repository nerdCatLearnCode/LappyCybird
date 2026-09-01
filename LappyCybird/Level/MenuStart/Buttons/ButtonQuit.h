#pragma once

#include <Engine/Node/Node.h>
#include <Instance.h>
#include <Engine/Texture/Texture.h>

class ButtonQuit : public Engine::Node
{
public:
	ButtonQuit();
	~ButtonQuit();

	void Render() override;
	void Update() override;
	void UpdateEvent() override;

private:

	Engine::RenderTexture* TextureButtonQuit;
};

