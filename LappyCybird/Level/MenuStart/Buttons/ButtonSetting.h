#pragma once

#include <Engine/Node/Node.h>
#include <Instance.h>
#include <Engine/Texture/Texture.h>

class ButtonSetting : public Engine::Node
{
public:
	ButtonSetting();
	~ButtonSetting();

	void Update() override;
	void Render() override;
	void UpdateEvent() override;

private:

	Engine::RenderTexture* TextureButtonSetting;
};

