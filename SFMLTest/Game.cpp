#include "Game.h"

#include "MainMenuLevel.h"

Game::Game()
    : mWindow(sf::VideoMode(1280, 720, 32U),
        "Project APCLPS GIRL",
        sf::Style::Titlebar | sf::Style::Close)
{
    mLevels.push(new MainMenuLevel(this));
}

void Game::Run()
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

void Game::processEvents()
{
    sf::Event event;
    while (mWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            mWindow.close();
        }
        mLevels.top()->HandleEvent(event);
    }
}

void Game::update(sf::Time deltaTime)
{
    mLevels.top()->Update(deltaTime);
}

void Game::render()
{
    mWindow.clear();
    mLevels.top()->Draw(mWindow);
    mWindow.display();
}
