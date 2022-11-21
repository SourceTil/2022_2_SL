/* Copyright 2022 S L */
#include <chrono>
#include <string>

#include "Config.hpp"
#include "IdleManager.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

using milliseconds = std::chrono::milliseconds;

// mock tests for IdleManager and Config

class MockIdleManager : public IdleManager {
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

// test for IdleManager
TEST(IdleManager, takeSleepTime) {
  MockIdleManager mockIdleManager;
  EXPECT_CALL(mockIdleManager, takeSleepTime()).Times(1);
  mockIdleManager.takeSleepTime();
}

// test for Config
TEST(Config, get_value) {
  MockConfig mockConfig;
  EXPECT_CALL(mockConfig, get_value<std::string>("service", "name")).Times(1);
  mockConfig.get_value<std::string>("service", "name");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
