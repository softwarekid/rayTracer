#ifndef ray_h__
#define ray_h__
#include "Vector3f.h"
class Ray
{
private:
    Vector3f _startPos;
    Vector3f _direction;
public:
    void SetStartPos(const Vector3f& startPos);
    void SetDirection(const Vector3f& direction);

    Ray(const Vector3f& startPos, const Vector3f& direction);
    Ray(){};
};
#endif