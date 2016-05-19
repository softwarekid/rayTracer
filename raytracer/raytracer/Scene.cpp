#include "Scene.h"
#include "Sphere.h"
using namespace std;

void Scene::_Swap(Scene& lhv, Scene& rhv)
{
    auto temp = lhv._objs;
    lhv._objs = rhv._objs;
    rhv._objs = temp;
}

float Scene::Intersect(const Ray& ray)
{
    float rayParam = -1;
    int count = _objs.size();
    for (int i = 0; i < count; i++)
    {
        float tempParam = _objs[i]->Intersect(ray);
        rayParam = tempParam > rayParam ? tempParam : rayParam;
    }
    return rayParam;
}

Scene::Scene(const Scene& scene) : Scene()
{
    _objs.reserve(scene._objs.size());
    for (auto obj : scene._objs)
    {
        _objs.push_back(Mesh::Clone(obj));
    }
}

Scene::Scene(Scene&& scene) : Scene()
{
    _Swap(scene, *this);
}

Scene& Scene::operator=(Scene scene)
{
    _Swap(scene, *this);
    return *this;
}

Scene::Scene() : _objs()
{
    _objs.push_back(new Sphere(Vector3f(0, 0, 0), 1));
}

Scene::~Scene()
{
    for (auto&& obj : _objs)
    {
        delete obj;
    }
    _objs.clear();
}