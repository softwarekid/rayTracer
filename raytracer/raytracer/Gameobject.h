#ifndef gameobject_h__
#define gameobject_h__
#include "Vector3f.h"
class Gameobject
{
protected:
    Vector3f _position;
public: 
    Vector3f GetPosition();
    Gameobject(const Vector3f& pos);
    Gameobject(){};
    virtual ~Gameobject(){}
};
#endif