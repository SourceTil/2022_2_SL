#pragma once

#include <component.hpp>


class ComponentList {
    public:
    ComponentList();
    template <classtype T>
    ComponentList& Append<T>(std::string name = T.kName);
    ComponentList& AppendComponentList();
    bool Contains(std::string name);
    Component* Find(std::string name);
    RunAll(Config);

    private:
    std::vector<Component> components;
}

ConponentList::ComponentList = default;

template <classtype T>
ComponentList::Append<T>(std::string name = T.kName){
    this.components.push();
}