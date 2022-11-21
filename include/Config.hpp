/* Copyright 2022 Krainikov Ivan */
#ifndef CONFIG_HPP_
#define CONFIG_HPP_
#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Config {
 private:
  json body;

 public:
  Config() {
    body = json::parse(R"(
      {
        "service" : {
          "name" : "service",
          "version" : "1.0.0",
          "port" : 8080,
          "host" : "localhost"
        }
      }
    )");
  }
  template <typename T>
  T get_value(const std::string& service, const std::string& parameter) {
    return T();
  }
};

#endif  // CONFIG_HPP_
