#include "Sphere.h"

GameobjectType Sphere::GetType()
{
    return SphereType;
}

Vector3f Sphere::Intersect(const Ray& ray)
{
    Vector3f result;
    return result;
}

Sphere::Sphere(const Vector3f& center, float radius) : _center(center), _radius(radius)
{
}

Sphere::Sphere(const Sphere& sphere)
{
    _center = sphere._center;
    _radius = sphere._radius;
}