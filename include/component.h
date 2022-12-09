#pragma once
#include <string>

class Component {
    typedef std::string state;
public:
    virtual ~Component() {}
    virtual std::string getName() = 0;
    virtual state getState() = 0;
    virtual void SetIdlePolicy() = 0;
};