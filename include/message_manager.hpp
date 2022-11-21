#pragma once
#include <message.hpp

class MessageManger{
    public:
    push(AbstractMessage);
    AbstractMessage pop(std::string); 
    static MessageManger get_instance();
    private:
    MessageManger();
    ~MessageManger();
    std::map<std::string, std::vector<AbstractMessage>> messages;
}