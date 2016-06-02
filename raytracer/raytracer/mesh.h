#ifndef mesh_h__
#define mesh_h__
#include "Gameobject.h"
#include "intersection.h"
class Ray;
enum MeshType
{
    SphereType,
    GeneralMeshType,
};

class Mesh : public Gameobject
{
public:
    static Mesh*  Clone(Mesh* gameobject);
    virtual MeshType GetType() = 0;
    virtual float Intersect(const Ray& ray) = 0;
	virtual Vector3f GetNormal(Vector3f& pos) = 0;
};
#endif