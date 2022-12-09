#pragma once

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "config.h"

template<typename T>
class MockConfig : public IConfig<T> {
public:
    MOCK_METHOD(T, get_value, (std::string service, std::string parameter), (override));
};