#pragma once

#include "component.h"
#include "serializer.h"
#include "sensor.h"
#include "config.h"
#include "message.h"
#include <vector>

// класс собирателя логов
template <typename Sensor = ISensor>
class LogCollector : public Component {
public:
    LogCollector() {}
    LogCollector(IConfig<std::string>* config) {
        kName = config->get_value("log_collector", "name");
    }
    ~LogCollector() override {}
    void set_serializer(ISerializer<std::string>* serializer) {
        this->serializer = serializer;
    }
    void set_sensors(std::vector<Sensor>* sensors) {
        this->sensors = sensors;
    }

    std::string getName() override {
        // return kName;
        return "LogCollector";
    }

    std::string getState() override {
        return "Idle";
    }

    void SetIdlePolicy() override {
        // установка политики Idle
    }
private:
    ISerializer<std::string>* serializer;
    std::string kName;
    std::vector<Sensor>* sensors;
};
