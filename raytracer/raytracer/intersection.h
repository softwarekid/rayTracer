#ifndef intersection_h__
#define intersection_h__
#include "Vector3f.h"
class Intersection
{
private:
	Vector3f _normal;
	Vector3f _pos;
public:
	Intersection(){};
	Intersection(const Vector3f& normal, const Vector3f& pos):_normal(normal), _pos(pos){};
};
#endif

