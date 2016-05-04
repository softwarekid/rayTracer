#ifndef sphere_h__
#define sphere_h__
#include "Vector3f.h"
#include "Gameobject.h"

class Sphere : public Gameobject
{
private:
    Vector3f _center;
    float _radius;

public:
    Vector3f Intersect(const Ray& ray) override ;
    Sphere(const Vector3f& center, float radius);
};

#endif
