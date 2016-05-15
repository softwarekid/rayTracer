#ifndef camera_h__
#define camera_h__
#include "Vector3f.h"
class Camera
{
private:
    Vector3f _pos;
    float _focalLength; // similar to near plane
    float _fov;
    int _width;
    int _height;

public:
    Camera(const Vector3f& pos,float focalLength, float fov, int width, int height);
    Vector3f GetPiexlEyeSpacePos(int xPiexl, int yPixel);
    int Width();
    int Height();
};
#endif