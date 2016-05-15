#ifndef ray_tracer_h__
#define ray_tracer_h__
#include "Vector3f.h"
#include "Camera.h"
#include "Scene.h"

class Light
{
private:
    Vector3f pos;
    Vector3f color;
    Vector3f ks;
    Vector3f kd;
    float shiniess;
};

class RayTracer
{
private:
    Camera _camera;
    Scene _scene;
    Light _light;
    Vector3f CalculateColor(const Vector3f& pos);

public:
    RayTracer(const Camera& camera, const Scene& scene, const Light& light);
    void Casting( int height, Vector3f** colors);

};
#endif