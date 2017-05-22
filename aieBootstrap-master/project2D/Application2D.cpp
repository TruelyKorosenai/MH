#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"


Application2D::Application2D() {

}

Application2D::~Application2D() {

}

bool Application2D::startup() {
	
	m_2dRenderer = new aie::Renderer2D();
	m_texture = new aie::Texture("./textures/tankRed.png");
	m_textureMiddle = new aie::Texture ("./textures/ball.png");
	m_textureBarrel = new aie::Texture ("./textures/barrelRed.png");

	Tank = Object(m_2dRenderer, m_texture);
	
	Barrel.SetParent (Middle);
	Middle.SetParent (Tank);
	return true;
}

void Application2D::shutdown() {
	
	delete m_texture;
	delete m_textureMiddle;
	delete m_textureBarrel;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) {

    Tank.Update(deltaTime);
	Middle.Update(deltaTime);
	Barrel.Update(deltaTime);
}

//--------------------------------------------------------------------
void Application2D::draw() {

	// wipe the screen to the background colour
	clearScreen();
	// begin drawing sprites
	m_2dRenderer->begin();
    Tank.Draw();   
	Middle.Draw();
	Barrel.Draw();
	// done drawing sprites
	m_2dRenderer->end();
}