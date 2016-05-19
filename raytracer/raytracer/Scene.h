#ifndef scene_h__
#define scene_h__
#include <vector>
#include "mesh.h"
#include "Ray.h"

class Scene
{
private:
    std::vector<Mesh*> _objs;
    void _Swap(Scene& lhv, Scene& rhv);
public:

    float Intersect(const Ray& ray);

    Scene(const Scene& scene);
    Scene(Scene&& scene);
    Scene& operator = (const Scene scene);
    Scene();
    ~Scene();
};
#endif
