#pragma once

#include "component.h"
#include "serializer.h"
#include "client.h"
#include "config.h"
#include "message.h"


class LogWriter : public Component {
public:
    LogWriter() {}
    LogWriter(IConfig<std::string>* config) {
        kName = config->get_value("log_sender", "name");
        host = config->get_value("log_sender", "host");
    }
    ~LogWriter() override {}
    void set_serializer(ISerializer<std::string>* serializer) {
        this->serializer = serializer;
    }

    void set_client(IClient *client) {
        this->client = client;
    }

    std::string getName() override {
        // return kName;
        return "LogWriter";
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
    IClient* client;
    
    std::string host;
};
