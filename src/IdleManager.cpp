/* Copyright 2022 Krainikov Ivan */
#include "IdleManager.h"

#include <chrono>

IdleManager::IdleManager() { last_call_time = 1; }

milliseconds IdleManager::takeSleepTime() {
  last_call_time *= 2;
  return last_call_time;
}

void IdleManager::process_idling() { return; }
