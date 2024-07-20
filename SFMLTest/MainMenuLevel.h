#pragma once
#include "ILevel.h"
class MainMenuLevel : public ILevel
{
public:
    MainMenuLevel();
    ~MainMenuLevel();

    void ProcessEvent(sf::Event& event) override;
    void Update(sf::Time deltaTime) override;
    void Render(sf::RenderWindow& window) override;

private:

};

