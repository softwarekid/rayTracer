#ifndef scene_h__
#define scene_h__
#include <vector>
#include <memory>
#include "Gameobject.h"

class Scene
{
private:
    std::vector<std::unique_ptr<Gameobject>> objs;
public:
    Scene(const Scene& scene);
    Scene(const Scene&& scene);
    Scene& operator= (const Scene& scene);
    Scene& operator= (const Scene&& scene);
    Scene();
    ~Scene();
};
#endif
