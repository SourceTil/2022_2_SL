#pragma once
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "socket.h"
#include <string>

class MockSocket : public ISocket {
public:
    MOCK_METHOD(void, Connect, (std::string address, int port), (override));
    MOCK_METHOD(void, Send, (std::string message), (override));
    MOCK_METHOD(std::string, Receive, (), (override));
    MOCK_METHOD(void, Close, (), (override));
};