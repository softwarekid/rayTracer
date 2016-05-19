#ifndef sphere_h__
#define sphere_h__
#include "Vector3f.h"
#include "mesh.h"

class Sphere : public Mesh 
{
private:
    Vector3f _center;
    float _radius;

public:
    MeshType GetType() override;
    float Intersect(const Ray& ray) override ;
    Sphere(const Vector3f& center, float radius);
    Sphere(const Sphere& sphere);
};

#endif
