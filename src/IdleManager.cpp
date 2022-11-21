/* Copyright 2022 Krainikov Ivan */
#include "IdleManager.h"

#include <chrono>

// 1 ms into last_call_time
IdleManager::IdleManager() { last_call_time = milliseconds(1); }

milliseconds IdleManager::takeSleepTime() {
  last_call_time *= 2;
  return last_call_time;
}

void IdleManager::process_idling() { return; }
