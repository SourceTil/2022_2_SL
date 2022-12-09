#pragma once
#include "sensor.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class MockSensor : public ISensor {
public:
    MOCK_METHOD(std::string, getSensorName, (), (override));
    MOCK_METHOD(std::string, getSensorType, (), (override));
    MOCK_METHOD(std::string, getSensorValue, (), (override));
};