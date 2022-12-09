
#pragma once
#include <string>

class IMessage {
public:
    virtual ~IMessage() {}
    virtual std::string getMessage() = 0;
};