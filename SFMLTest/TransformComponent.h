#pragma once

#include <SFML/Graphics.hpp>

#include "IComponent.h"

class Actor;

class TransformComponent : public IComponent
{
public:
    void ProcessEvent(const sf::Event& event) override;
    void Update(sf::Time deltaTime) override;
    void Render(sf::RenderWindow& window) override;
    void SetOwner(Actor* onwer) override;

    void SetPosition(const sf::Vector2f& position);
    void SetRotation(const float rotation);
    void SetScale(const sf::Vector2f& scale);

    const sf::Vector2f& GetPosition() const;
    const float GetRotation() const;
    const sf::Vector2f& GetScale() const;

private:
    sf::Vector2f mPosition;
    float mRotation;
    sf::Vector2f mScale;

    Actor* mOwner;
};