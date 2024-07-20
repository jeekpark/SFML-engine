#include "TransformComponent.h"

void TransformComponent::ProcessEvent(const sf::Event& event)
{
    static_cast<void>(event);
}

void TransformComponent::Update(sf::Time deltaTime)
{
    static_cast<void>(deltaTime);
}

void TransformComponent::Render(sf::RenderWindow& window)
{
    static_cast<void>(window);
}

void TransformComponent::SetOwner(Actor* onwer)
{
    mOwner = onwer;
}

void TransformComponent::SetPosition(const sf::Vector2f& position)
{
    mPosition = position;
}

void TransformComponent::SetRotation(const float rotation)
{
    mRotation = rotation;
}

void TransformComponent::SetScale(const sf::Vector2f& scale)
{
    mScale = scale;
}

const sf::Vector2f& TransformComponent::GetPosition() const
{
    return mPosition;
}

const float TransformComponent::GetRotation() const
{
    return mRotation;
}

const sf::Vector2f& TransformComponent::GetScale() const
{
    return mScale;
}