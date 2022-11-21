#include "mock.hpp"




TEST(TestComponent, insertdefname) {
  auto ComponentList list{};
  list.Append<MockComponent>();
}


TEST(TestComponent, insertspecname) {
  auto ComponentList list{};
  list.Append<MockComponent>("something");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

