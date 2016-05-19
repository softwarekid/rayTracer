#include "Ray.h"

float const Ray::NoneIntersection = -1;

void Ray::SetStartPos(const Vector3f& startPos)
{
    _startPos = startPos;
}

void Ray::SetDirection(const Vector3f& direction)
{
    _direction = direction;
}

const Vector3f& Ray::GetStartPos() const
{
    return _startPos;
}

const Vector3f& Ray::GetDir() const 
{
    return _direction;
}

Ray::Ray(const Vector3f& startPos, const Vector3f& direction) :_startPos(startPos), _direction(direction)
{
}