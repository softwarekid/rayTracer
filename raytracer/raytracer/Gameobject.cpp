#include "Gameobject.h"
#include "Sphere.h"

Gameobject* Gameobject::Clone(Gameobject* gameobject)
{
    switch (gameobject->GetType())
    {
    case SphereType:
        return new Sphere(*dynamic_cast<Sphere*>(gameobject));
        break;
    default:
        return nullptr;
    }
}