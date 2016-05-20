#ifndef camera_h__
#define camera_h__
#include "Vector3f.h"
#include "Gameobject.h"

class Camera : public Gameobject
{
private:
    float _focalLength; // similar to near plane
    float _fov;
    int _width;
    int _height;

    float _left;
    float _bottom;
    float _deltaX;
    float _deltaY;

public:
    Camera(const Vector3f& pos,float focalLength, float fov, int width, int height);
    Vector3f GetPixelWorldSpacePos(int xPiexl, int yPixel);
    int Width();
    int Height();
};
#endif