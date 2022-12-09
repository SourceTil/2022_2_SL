#pragma once

#include <string>

class ISocket {
public:
    virtual ~ISocket() = default;
    virtual void Connect(std::string ip, int port) = 0;
    virtual void Send(std::string message) = 0;
    virtual std::string Receive() = 0;
    virtual void Close() = 0;
};
