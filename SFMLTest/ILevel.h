#pragma once

namespace sf
{
    class Event;
    class Time;
    class RenderWindow;
}

class ILevel
{
public:
    virtual ~ILevel() {};
    virtual void ProcessEvent(const sf::Event& event) = 0;
    virtual void Update(const sf::Time& deltaTime) = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
};
