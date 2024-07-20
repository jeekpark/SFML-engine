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
    virtual void ProcessEvent(sf::Event& event) = 0;
    virtual void Update(sf::Time deltaTime) = 0;
    virtual void Render(sf::RenderWindow& window) = 0;
};
