#pragma once

namespace sf
{
    class Time;
    class RenderWindow;
    class Event;
}

class Actor;

class IComponent
{
public:
    virtual ~IComponent() {};
    virtual void ProcessEvent(const sf::Event& event) = 0;
    virtual void Update(sf::Time deltaTime) = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
    virtual void SetOwner(Actor* owner) = 0;
};
