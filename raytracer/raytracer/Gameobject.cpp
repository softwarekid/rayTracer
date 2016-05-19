#include "Gameobject.h"

Vector3f Gameobject::GetPosition()
{
    return _position;
}

Gameobject::Gameobject(const Vector3f& pos) : _position(pos)
{
}