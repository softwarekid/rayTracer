#ifndef ray_h__
#define ray_h__
#include "Vector3f.h"
class Ray
{
private:
    Vector3f _startPos;
    Vector3f _direction;
public:
    float const static NoneIntersection;
    void SetStartPos(const Vector3f& startPos);
    void SetDirection(const Vector3f& direction);
    const Vector3f& GetStartPos() const ;
    const Vector3f& GetDir() const ;

    Ray(const Vector3f& startPos, const Vector3f& direction);
    Ray(){};
};
#endif