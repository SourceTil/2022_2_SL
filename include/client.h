#pragma once

#include <string>

class IClient {
public:
    virtual ~IClient() = default;
    virtual void Select(std::string select) = 0;
    virtual void Execute(std::string execute) = 0;
};