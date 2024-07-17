#include "Level.h"
Level::Level()
{}

Level::~Level()
{
    for (int i = 0; i < mActors.size(); ++i)
    {
        delete mActors[i];
    }
}

void Level::AddActor(Actor* actor)
{
    mActors.push_back(actor);
}

void Level::Update(sf::Time deltaTime)
{
    for (int i = 0; i < mActors.size(); ++i)
    {
        mActors[i]->Update(deltaTime);
    }
}

void Level::Render(sf::RenderWindow& window)
{
    for (int i = 0; i < mActors.size(); ++i)
    {
        mActors[i]->Render(window);
    }
}