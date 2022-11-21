/* Copyright 2022 Krainikov Ivan */
#ifndef IDLEMANAGER_H_
#define IDLEMANAGER_H_
#include <chrono>

using milliseconds = std::chrono::milliseconds;

// interface for IdleManager
class IIdleManager {
 public:
  virtual milliseconds takeSleepTime() = 0;
};

// class for IdleManager
class IdleManager : public IIdleManager {
 public:
  IdleManager();
  milliseconds takeSleepTime() override;
  void process_idling();
 private:
  milliseconds last_call_time;
};
#endif  // IDLEMANAGER_H_
