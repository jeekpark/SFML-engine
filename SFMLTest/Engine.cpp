#include "Engine.h"

#include "MainMenuLevel.h"

Engine::Engine()
    : mWindow(sf::VideoMode(1280U, 720U), "TEST", sf::Style::Titlebar | sf::Style::Close)
{
    mWindow.setFramerateLimit(60U);
    mCurrentLevel = new MainMenuLevel();
}

void Engine::Run()
{
    sf::Clock clock;
    while (mWindow.isOpen())
    {
        sf::Time deltaTime = clock.restart();
        processEvents();
        update(deltaTime);
        
        render();
    }
}

void Engine::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            mWindow.close();
        }
        mCurrentLevel->ProcessEvent(event);
    }
}

void Engine::update(sf::Time deltaTime) {
    mCurrentLevel->Update(deltaTime);
}

void Engine::render() {
    mWindow.clear();
    mCurrentLevel->Render(mWindow);
    mWindow.display();
}
