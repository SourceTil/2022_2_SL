#pragma once
#include "message.h" 

template <typename T>
class ISerializer {
public:
    virtual ~ISerializer() = default;
    virtual T serialize(IMessage* message) = 0;
    virtual IMessage* deserialize(T message) = 0;
};
