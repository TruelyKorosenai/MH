#include "Object.h"



Object::Object(aie::Renderer2D*Renderer, aie::Texture*Texture)
{
    m_Renderer = Renderer;
    m_Texture = Texture;
}

Object::Object()
{

}


Object::~Object()
{
}


void Object::Update(float delta)
{
    //call calculate // work with collions
    if (true)
    {

    }
    Calculate();
}

void Object::Draw()
{
   // aie::Renderer2D drawSpriteTransformed3x3(Texture* texture, float* transformMat3x3, float width = 0.0f, float height = 0.0f, float depth = 0.0f, float xOrigin = 0.5f, float yOrigin = 0.5f);
    m_Renderer->drawSpriteTransformed3x3(m_Texture, ModelMatrix);
}

void Object::Calculate()
{
    Matrix3 m1;
    Matrix3 m2;
    Matrix3 m3;
    m1 = ModelMatrix.SetTranslateFloats (40,40);
    m2.setRotateZ(0);
    m3 = m3.SetScaleWithFloats (1,1);

    ModelMatrix = m1 * m2 * m3;
    //translate * rotation * scale
}

void Object::SetEverything(aie::Renderer2D*Renderer, aie::Texture*Texture)
{
    Calculate();
    m_Renderer = Renderer;
    m_Texture = Texture;
    Scale = Vector2(1, 1); //passing in vectors wont work!!
    rotate = 0; //theres a problem with rotate
    Position = Vector2(40, 40); //passing in vectors wont work!!
}