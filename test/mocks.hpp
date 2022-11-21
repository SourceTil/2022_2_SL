#pragma once

#include "gmock/gmock.h"

#include <components_list.hpp>
#include <demon_main.hpp>
#include <message_manager.hpp>
#include <component.hpp>

class MockComponent: public Component{
    public:
    MockComponent() = default;
    ~MockComponent() = default;
    const kName = "mock-component";
}