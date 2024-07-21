#include "MainMenuLevel.h"
#include <iostream>
#include "TransformComponent.h"
MainMenuLevel::MainMenuLevel()
{
    mTestActor.SetLevel(this);
    mTestActor.AddComponent(new TransformComponent());
    mTestActor.GetComponent<TransformComponent>()->SetPosition(sf::Vector2f(10.f, 20.f));
}

MainMenuLevel::~MainMenuLevel()
{

}

void MainMenuLevel::ProcessEvent(const sf::Event& event)
{
    mTestActor.ProcessEvent(event);
}

void MainMenuLevel::Update(const sf::Time& deltaTime)
{
    mTestActor.Update(deltaTime);
}

void MainMenuLevel::Render(sf::RenderWindow& window)
{
    mTestActor.Render(window);
}