#include "Sphere.h"
#include "Ray.h"
#include <math.h>

MeshType Sphere::GetType()
{
    return SphereType;
}

float Sphere::Intersect(const Ray& ray)
{
    // rtr3,p741
    Vector3f l = _center - ray.GetStartPos();
    float s = l.Dot(ray.GetDir());
    float ll = l.Dot(l);
    float rr = _radius * _radius;

    if (s < 0 && ll > rr)
    {
        return Ray::NoneIntersection;
    }

    float mm = ll - s*s;
    if (mm > rr)
    {
        return Ray::NoneIntersection;
    }

    float q = sqrt(rr - mm);
    if (ll > rr)
    {
        return s - q;
    }
    else
    {
        return s + q;
    }
}

Sphere::Sphere(const Vector3f& center, float radius) : _center(center), _radius(radius)
{
}

Sphere::Sphere(const Sphere& sphere)
{
    _center = sphere._center;
    _radius = sphere._radius;
}