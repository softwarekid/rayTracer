#ifndef camera_h__
#define camera_h__
#include "Vector3f.h"
class Camera
{
private:
    float _nearPlane;
    float _fov;
    float _viewAspect;

public:
    Camera(float nearPlane_, float fov_, float viewAspect);
    Vector3f GetPos(int xPiexl, int yPixel);
};

#endif