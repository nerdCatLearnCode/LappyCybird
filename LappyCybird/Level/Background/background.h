#pragma once

#include <SDL3/SDL.h>
#include <Engine/Node/Node.h>
#include <Engine/Texture/Texture.h>
#include <memory>
#include <Instance.h>

class Background : public Engine::Node
{
public:
	Background();
	~Background();

	void Update() override;
	void Render() override;
	void UpdateEvent() override;

private:
	Engine::RenderTexture* backgroundTexture;
	Engine::RenderTexture* backgroundTextureStar;
	Engine::RenderTexture* backgroundTexturePlanet;

};
