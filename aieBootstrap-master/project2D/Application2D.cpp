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
	
	Tank = Object(m_2dRenderer, m_texture);

	return true;
}

void Application2D::shutdown() {
	
	delete m_texture;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) {

    Tank.Update(deltaTime);
}

//--------------------------------------------------------------------
void Application2D::draw() {

	// wipe the screen to the background colour
	clearScreen();
	// begin drawing sprites
	m_2dRenderer->begin();
    Tank.Draw();   
	// done drawing sprites
	m_2dRenderer->end();
}