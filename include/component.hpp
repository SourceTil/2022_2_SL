#pragma once
class IdleManager;
std::mi IdleManager::take_sleep_time;


enum class State{
    Idle,
    Run,
    Stop,
    Error
}

class Component{
    Component();
    ~Component();
    std::string_view get_name();
    State get_state();
    SetIdlePolicy(Idle);
}