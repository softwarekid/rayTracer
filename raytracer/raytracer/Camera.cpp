#include "Camera.h"

Camera::Camera(const Vector3f& pos, float focalLength, float fov, int width, int height) : Gameobject(pos), _focalLength(focalLength), _fov(fov), _width(width), _height(height)
{
    float aspect = (float)width / (float)height;
    float worldHeight = 2 * tanf(fov * 0.5) * _focalLength;
    float worldWidth = worldHeight * aspect;
    _deltaX = worldWidth / width;
    _deltaY = worldHeight / height;
    _left = _position.x - worldHeight / 2;
    _bottom = _position.y - height / 2;
}

Vector3f Camera::GetPixelWorldSpacePos(int xPixel, int yPixel)
{
    return Vector3f((xPixel - 0.5) * _deltaX + _left, (yPixel - 0.5) * _deltaY, _focalLength);
}

int Camera::Width()
{
    return _width;
}

int Camera::Height()
{
    return _height;
}