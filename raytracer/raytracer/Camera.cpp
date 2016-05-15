#include "Camera.h"

Camera::Camera(const Vector3f& pos, float focalLength, float fov, int width, int height):_pos(pos), _focalLength(focalLength), _fov(fov), _width(width), _height(height)
{
    
}

Vector3f Camera::GetPiexlEyeSpacePos(int xPiexl, int yPixel)
{

}

int Camera::Width()
{
    return _width;
}

int Camera::Height()
{
    return _height;
}