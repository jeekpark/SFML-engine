#pragma once

#include <vector>
#include <memory>
#include "IComponent.h"

class Actor
{
public:
    template<class T, class... Args>
    T* AddComponent(Args&&... args)
    {
        static_assert(std::is_base_of<IComponent, T>::value);
        std::unique_ptr<T> component = std::make_unique<T>(std::forward<Args>(args)...);
        T* componentPTR = component.get();
        mComponents.push_back(std::move(component));
        return componentPTR;
    }

    void Update()
    {
        for (auto& component : mComponents)
        {
            component->Update(3.f);
        }
    }

    void Render(sf::RenderWindow& window);
private:
    std::vector<std::unique_ptr<IComponent>> mComponents;
};

