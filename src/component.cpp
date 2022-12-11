#include <sensors-c++/sensors.h>
#include <iostream>
#include <vector>
#include <fstream>

class LogColector {
 private:
    std::vector<sensors::chip_name> bus;
    // Все датчики в системе
 public:
    LogColector() {
        bus = sensors::get_detected_chips();
    }

    ~LogColector() {};

    std::vector<sensors::chip_name> &output() {
        return bus;
    }
};

template<class Colector>
class LogSender {
 public:
    LogSender() {};
    ~LogSender() {};

    void output_sock(Colector instance) {
        auto bus = instance.output();
        for (size_t i = 0; i < bus.size(); i++) {
            std::cout<<bus[i].name()<<std::endl;
        }
    }
};

int main() {
    LogColector a;
    LogSender<LogColector> b;
    b.output_sock(a);
    return 0;
}
