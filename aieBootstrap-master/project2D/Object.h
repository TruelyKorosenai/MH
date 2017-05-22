#pragma once
#include <Application.h>
#include <Renderer2D.h>
#include <KoroMaths.h>


class Object
{
public:

    Object(aie::Renderer2D*Renderer, aie::Texture*Texture);
    ~Object();
    Object();

    void Update(float delta);
    void Draw();
    void Calculate();
    void SetEverything(aie::Renderer2D*Renderer, aie::Texture*Texture);
	void SetParent (Object& Parent);
    Matrix3 ModelMatrix;
    Vector2 Scale;
    Vector2 Position;
    float rotate;
	Object *m_parent;

private:
    aie::Renderer2D* m_Renderer;
    aie::Texture* m_Texture;
};

