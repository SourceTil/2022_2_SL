#pragma once
#include <string>

class ISensor {
public:
    virtual ~ISensor() = default;
    virtual std::string getSensorName() = 0;
    virtual std::string getSensorType() = 0;
    virtual std::string getSensorValue() = 0;
};