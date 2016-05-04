#include "Scene.h"
#include "Sphere.h"
using namespace std;
Scene::Scene() : objs()
{
    objs.push_back(make_unique<Sphere>(Vector3f(0,0,0), 2));
}