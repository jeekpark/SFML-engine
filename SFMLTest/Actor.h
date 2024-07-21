#pragma once

#include <vector>
#include <memory>
#include <typeindex>
#include <unordered_map>

#include <SFML/Graphics.hpp>

#include "IComponent.h"

class ILevel;

class Actor
{
public:
    Actor();
    ~Actor();

    void ProcessEvent(const sf::Event& event);
    void Update(const sf::Time& deltaTime);
    void Render(sf::RenderWindow& window);
    void SetLevel(ILevel* level);

    void AddComponent(IComponent* component);

    template<class T>
    T* GetComponent()
    {
        auto it = mComponentsMap.find(std::type_index(typeid(T)));
        if (it != mComponentsMap.end())
        {
            return static_cast<T*>(it->second);
        }
        return nullptr;
    }
    
private:
    ILevel* mLevel;
    std::vector<IComponent*> mComponents;
    std::unordered_map<std::type_index, IComponent*> mComponentsMap;
};

