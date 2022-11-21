/* Copyright 2022 S L */
#include <chrono>
#include <string>
#include "Config.hpp"
#include "IdleManager.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using milliseconds = std::chrono::milliseconds;

class MockIdleManager : public IIdleManager {
 public:
  MOCK_METHOD(milliseconds, takeSleepTime, (), (override));
  MOCK_METHOD(void, process_idling, (), (override));
};

class MockConfig : public Config {
 public:
  MOCK_METHOD(std::string, get_value,
              (const std::string& service, const std::string& parameter),
              (override));
};

TEST(IdleManager, takeSleepTime) {
  MockIdleManager mock_idle_manager;
  EXPECT_CALL(mock_idle_manager, takeSleepTime()).Times(1)
}

TEST(IdleManager, process_idling) {
  MockIdleManager mock;
  EXPECT_CALL(mock, process_idling()).Times(1);
  mock.process_idling();
}

TEST(Config, get_value) {
  MockConfig mock;
  EXPECT_CALL(mock, get_value<std::string>("service", "name")).Times(1);
  mock.get_value<std::string>("service", "name");
}
