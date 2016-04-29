#include "Ray.h"

void Ray::SetStartPos(const Vector3f& startPos)
{
    _startPos = startPos;
}

void Ray::SetDirection(const Vector3f& direction)
{
    _direction = direction;
}

Ray::Ray(const Vector3f& startPos, const Vector3f& direction) :_startPos(startPos), _direction(direction)
{
}