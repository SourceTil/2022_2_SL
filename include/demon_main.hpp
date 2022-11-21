#pragma once
#include <component_list.hpp>

class Config;
template <classname T>
Config::get_value<T>(std::string service, std::string parameter);

class DaemonMain{
    public:
    DaemonMain();
    ~DaemonMain();

    private:
}