#pragma once

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "client.h"

class MockClient : public IClient {
public:
    MOCK_METHOD(void, Select, (std::string select), (override));
    MOCK_METHOD(void, Execute, (std::string execute), (override));
};