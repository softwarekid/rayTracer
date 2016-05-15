#ifndef gameobject_h__
#define gameobject_h__
#include "Vector3f.h"
class Gameobject
{
private:
    Vector3f position;
    Vector3f rotation;
public: 
    virtual ~Gameobject(){}
};
#endif