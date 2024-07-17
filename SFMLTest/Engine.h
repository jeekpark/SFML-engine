#pragma once

#include <SFML/Graphics.hpp>

#include "Level.h"

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
    Level* mCurrentLevel;

};

