#ifndef sphere_h__
#define sphere_h__
#include "Vector3f.h"

class Sphere
{
private:
    Vector3f _center;
    float _radius;

public:
    Sphere(const Vector3f& center, float radius);
};

#endif
