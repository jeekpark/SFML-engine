#pragma once

#include "ILevel.h"
#include "Actor.h"
class MainMenuLevel : public ILevel
{
public:
    MainMenuLevel();
    ~MainMenuLevel();

    void ProcessEvent(const sf::Event& event) override;
    void Update(const sf::Time& deltaTime) override;
    void Render(sf::RenderWindow& window) override;

private:
    Actor mTestActor;
};

