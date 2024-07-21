#include "Actor.h"

Actor::Actor()
    : mLevel(nullptr)
{}

Actor::~Actor()
{
    for (IComponent* component : mComponents)
    {
        delete component;
    }
}

void Actor::ProcessEvent(const sf::Event& event)
{
    for (IComponent* component : mComponents)
    {
        component->ProcessEvent(event);
    }
}

void Actor::Update(const sf::Time& deltaTime)
{
    for (IComponent* component : mComponents)
    {
        component->Update(deltaTime);
    }
}

void Actor::Render(sf::RenderWindow& window)
{
    for (IComponent* component : mComponents)
    {
        component->Render(window);
    }
}

void Actor::SetLevel(ILevel* level)
{
    mLevel = level;
}

void Actor::AddComponent(IComponent* component)
{
    component->SetOwner(this);
    mComponents.push_back(component);
    mComponentsMap[std::type_index(typeid(*component))] = component;
}