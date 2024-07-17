#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "Component.h"

class Actor
{
public:
    Actor();
    virtual ~Actor();

    void AddComponent(Component* component);
    void Update(sf::Time deltaTime);
    void Render(sf::RenderWindow& window);

private:
    std::vector<Component*> mComponents;

};

