#pragma once

#include <SFML/Graphics.hpp>

#include "ILevel.h"

class Engine
{
public:
    Engine();
    void Run();

private:
    void processEvents();
    void update(sf::Time deltaTime);
    void render();

    sf::RenderWindow mWindow;
    ILevel* mCurrentLevel;

};

