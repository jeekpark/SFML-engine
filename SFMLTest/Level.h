#pragma once

#include <vector>

#include "Actor.h"

class Level
{
public:
    Level();
    virtual ~Level();

    void AddActor(Actor* actor);
    void Update(sf::Time deltaTime);
    void Render(sf::RenderWindow& window);
private:
    std::vector<Actor*> mActors;
};

