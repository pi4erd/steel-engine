#pragma once
#include <glm/glm.hpp>
#include "object.hpp"
#include "../gameengine/lighting.hpp"

class Scene {
public:
    Scene();
    ~Scene();

    void tick();
    void addObject(SteelObject*);
    void removeObject(SteelObject*);

    static Scene* currentScene;

public:
    DirectionalLight light;

    glm::vec3 backgroundColor;

    std::vector<SteelObject*> objects;
};
