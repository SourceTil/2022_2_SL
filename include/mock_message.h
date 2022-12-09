#pragma once

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "message.h"

class MockMessage : public IMessage {
public:
    MOCK_METHOD(std::string, getMessage, (), (override));
};
