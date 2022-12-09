#pragma once
#include "serializer.h"
#include "message.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

template <typename T>
class MockSerializer : public ISerializer<T> {
public:
    MOCK_METHOD(T, serialize, (IMessage*), (override));
    MOCK_METHOD(IMessage*, deserialize, (T), (override));
};
