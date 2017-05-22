#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Object.h"

class Application2D : public aie::Application {
public:

    Object Tank;
	Object Middle;
	Object Barrel;

	Application2D ();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*       m_textureMiddle;
	aie::Texture*       m_textureBarrel;
};