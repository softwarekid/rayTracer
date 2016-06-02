#include "mesh.h"
#include "Sphere.h"

Mesh* Mesh::Clone(Mesh* gameobject)
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
