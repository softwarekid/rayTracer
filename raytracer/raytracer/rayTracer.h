#ifndef ray_tracer_h__
#define ray_tracer_h__
#include "Vector3f.h"
#include "Camera.h"
class rayTracer
{
private:
    Vector3f _eyePos;
    Camera _camera;
public:
    rayTracer(const Vector3f& eyePos, const Camera& camera);
};


#endif
