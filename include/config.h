#pragma once
#include <string>

template <typename T>
class IConfig {
    typedef std::string json;
public:
    virtual ~IConfig() {}
    virtual T get_value(std::string service, std::string parameter) = 0;
private:
    json body;
};