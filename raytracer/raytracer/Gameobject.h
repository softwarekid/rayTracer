#ifndef gameobject_h__
#define gameobject_h__
#include "Vector3f.h"
class Ray;

class Gameobject
{
public: 
    virtual Vector3f Intersect(const Ray& ray) = 0;
    virtual ~Gameobject(){}
};
#endif