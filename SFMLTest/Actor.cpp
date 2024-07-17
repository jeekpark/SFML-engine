#include "Actor.h"

Actor::Actor()
{}

Actor::~Actor()
{
    for (int i = 0; i < mComponents.size(); ++i)
    {
        delete mComponents[i];
    }
}

void Actor::AddComponent(Component* component)
{
    mComponents.push_back(component);
}

void Actor::Update(sf::Time deltaTime)
{
    for (int i = 0; i < mComponents.size(); ++i)
    {
        mComponents[i]->Update(deltaTime);
    }
}

void Actor::Render(sf::RenderWindow& window)
{
    for (int i = 0; i < mComponents.size(); ++i)
    {
        mComponents[i]->Render(window);
    }
}