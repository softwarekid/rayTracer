#ifndef ray_tracer_h__
#define ray_tracer_h__
#include "Vector3f.h"
#include "Camera.h"
#include "Gameobject.h"

class RayTracer
{
private:
    Vector3f _eyePos;
    Camera _camera;

public:
    RayTracer(const Vector3f& eyePos, const Camera& camera);
    void Casting(int width, int height, float** colors);

};


#endif
