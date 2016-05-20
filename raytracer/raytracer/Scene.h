#ifndef scene_h__
#define scene_h__
#include <vector>
#include "mesh.h"
#include "Ray.h"
#include "intersection.h"
class Scene
{
private:
    std::vector<Mesh*> _objs;
    void _Swap(Scene& lhv, Scene& rhv);
public:

    Intersection Intersect(const Ray& ray);

    Scene(const Scene& scene);
    Scene(Scene&& scene);
    Scene& operator = (const Scene scene);
    Scene();
    ~Scene();
};
#endif
