#include "rayTracer.h"
#include "Ray.h"

Vector3f RayTracer::Intersect(Ray ray, Sphere sphere)
{
    Vector3f result;
    return result;
}

RayTracer::RayTracer(const Vector3f& eyePos, const Camera& camera) :_eyePos(eyePos), _camera(camera)
{

}

void RayTracer::Casting(int width, int height, float** colors)
{
    _camera.SetDimension(width, height);
    Ray ray;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
           Vector3f pixelWorldPos = _camera.GetPos(i, j);
           ray.SetStartPos(pixelWorldPos);
           ray.SetDirection(pixelWorldPos - _eyePos);
           

        }
    }
}
