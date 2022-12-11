#include <sensors-c++/sensors.h>
#include <iostream>
#include <vector>

class LogColector {
 private:
    std::vector<sensors::chip_name> bus;
    // Все датчики в системе
 public:
    LogColector() {
        bus = sensors::get_detected_chips();
    }

    ~LogColector() {};

    void print_bus() {
        std::vector<sensors::feature> temp;
        std::vector<sensors::subfeature> temp_sub;
        for (size_t i = 0; i < bus.size(); i++) {
            std::cout<<bus[i].name()<<std::endl;
            temp = bus[i].features();
            for (size_t j = 0; j < temp.size(); j++) {
                std::cout<<temp[j].number()<<std::endl;
                temp_sub = temp[j].subfeatures();
                for (size_t k = 0; k < temp_sub.size(); k++) {
                     std::cout<<temp_sub[k].read()<<std::endl;
                }
            }
        }
    }
};

int main() {
    LogColector a;
    a.print_bus();
    return 0;
}