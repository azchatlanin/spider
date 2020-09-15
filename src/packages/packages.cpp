#include <iostream>

/* log */
#include "spdlog/spdlog.h"

/* project */
#include "packages.hpp"

Packages::Packages(const std::string path) {
  spdlog::info(path);
}

Packages::~Packages() {
  spdlog::info("Descriptor {0}", "packages");
}

void Packages::parse() {
  spdlog::info("parse");
}