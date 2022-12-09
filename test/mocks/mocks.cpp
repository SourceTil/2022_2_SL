#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include "serializer.h"
#include "message.h"
#include "sensor.h"
#include "config.h"
#include "logcollector.h"
#include "logsender.h"
#include "logacceptor.h"
#include "logwriter.h"
#include "mock_serializer.h"
#include "mock_message.h"
#include "mock_sensor.h"
#include "mock_config.h"
#include "mock_client.h"

using ::testing::AtLeast; 

//------------------LogCollector------------------

TEST(LogCollector, set_serializer) {
    MockSerializer<std::string> serializer;
    LogCollector log_collector;
    log_collector.set_serializer(&serializer);
}

TEST(LogCollector, config) {
    MockConfig<std::string> config;
    LogCollector log_collector(&config);
    EXPECT_EQ(log_collector.getName(), "LogCollector");
}

TEST(LogCollector, getName) {
    LogCollector log_collector;
    EXPECT_EQ(log_collector.getName(), "LogCollector");
}

TEST(LogCollector, getState) {
    LogCollector log_collector;
    EXPECT_EQ(log_collector.getState(), "Idle");
}

TEST(LogCollector, SetIdlePolicy) {
    LogCollector log_collector;
    EXPECT_NO_THROW(log_collector.SetIdlePolicy());
}

TEST(LogCollector, set_sensors) {
    LogCollector<MockSensor> log_collector;
    std::vector<MockSensor> sensors;
    log_collector.set_sensors(&sensors);
}

// ------------------LogSender------------------

TEST(LogSender, set_serializer) {
    MockSerializer<std::string> serializer;
    LogSender log_sender;
    log_sender.set_serializer(&serializer);
}

TEST(LogSender, config) {
    MockConfig<std::string> config;
    LogSender log_sender(&config);
    EXPECT_EQ(log_sender.getName(), "LogSender");
}

TEST(LogSender, getName) {
    LogSender log_sender;
    EXPECT_EQ(log_sender.getName(), "LogSender");
}

TEST(LogSender, getState) {
    LogSender log_sender;
    EXPECT_EQ(log_sender.getState(), "Idle");
}

TEST(LogSender, SetIdlePolicy) {
    LogSender log_sender;
    EXPECT_NO_THROW(log_sender.SetIdlePolicy());
}

// ------------------LogAccepter------------------

TEST(LogAccepter, set_serializer) {
    MockSerializer<std::string> serializer;
    LogAccepter log_accepter;
    log_accepter.set_serializer(&serializer);
}

TEST(LogAccepter, config) {
    MockConfig<std::string> config;
    LogAccepter log_accepter(&config);
    EXPECT_EQ(log_accepter.getName(), "LogAccepter");
}

TEST(LogAccepter, getName) {
    LogAccepter log_accepter;
    EXPECT_EQ(log_accepter.getName(), "LogAccepter");
}

TEST(LogAccepter, getState) {
    LogAccepter log_accepter;
    EXPECT_EQ(log_accepter.getState(), "Idle");
}

TEST(LogAccepter, SetIdlePolicy) {
    LogAccepter log_accepter;
    EXPECT_NO_THROW(log_accepter.SetIdlePolicy());
}

// ------------------LogWriter------------------
TEST(LogWriter, set_serializer) {
    MockSerializer<std::string> serializer;
    LogWriter log_writer;
    log_writer.set_serializer(&serializer);
}

TEST(LogWriter, config) {
    MockConfig<std::string> config;
    LogWriter log_writer(&config);
    EXPECT_EQ(log_writer.getName(), "LogWriter");
}

TEST(LogWriter, getName) {
    LogWriter log_writer;
    EXPECT_EQ(log_writer.getName(), "LogWriter");
}

TEST(LogWriter, getState) {
    LogWriter log_writer;
    EXPECT_EQ(log_writer.getState(), "Idle");
}

TEST(LogWriter, SetIdlePolicy) {
    LogWriter log_writer;
    EXPECT_NO_THROW(log_writer.SetIdlePolicy());
}

TEST(LogWriter, set_client) {
    LogWriter log_writer;
    MockClient client;
    log_writer.set_client(&client);
}
