#pragma once

#include <SFML/Graphics.hpp>

class Component
{
public:
    virtual ~Component() {}
    virtual void Update(sf::Time deltaTime) = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
};
