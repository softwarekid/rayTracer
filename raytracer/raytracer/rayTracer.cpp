#include "rayTracer.h"
#include "Ray.h"


Vector3f RayTracer::CalculateColor(const Vector3f& pos)
{
    return Vector3f();
}

RayTracer::RayTracer(const Camera& camera, const Scene& scene, const Light& light) :_camera(camera), _scene(scene)
{
    
}

void RayTracer::Casting(Vector3f** colors)
{
    Ray ray;
    for (int i = 0; i < _camera.Width(); i++)
    {
        for (int j = 0; j < _camera.Height(); j++)
        {
           Vector3f pixelWorldPos = _camera.GetPiexlWorldSpacePos(i, j);
           ray.SetStartPos(pixelWorldPos);
           ray.SetDirection(pixelWorldPos - _eyePos);
           Vector3f intersection = _scene.Intersect(ray);
           colors[i][j] = CalculateColor(intersection);
        }
    }
}
