#pragma once

#include "component.h"
#include "serializer.h"
#include "socket.h"
#include "config.h"
#include "message.h"


class LogAccepter : public Component {
public:
    LogAccepter() {}
    LogAccepter(IConfig<std::string>* config) {
        kName = config->get_value("log_sender", "name");
        ip = config->get_value("log_sender", "ip");
        port = config->get_value("log_sender", "port");
    }
    ~LogAccepter() override {}
    void set_serializer(ISerializer<std::string>* serializer) {
        this->serializer = serializer;
    }

    void set_socket(ISocket* socket) {
        this->socket = socket;
    }

    std::string getName() override {
        // return kName;
        return "LogAccepter";
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
    ISocket* socket;
    
    std::string ip;
    std::string port;
};
