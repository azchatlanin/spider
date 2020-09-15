#include <iostream>

/* log */
#include "spdlog/spdlog.h"

/* project */
#include "src/packages/packages.hpp"

int main(int, char **) {
  spdlog::info("Welcome to spider!");

  using namespace std::string_literals;
  Packages pkg{"/path/to/packages"s};
  pkg.parse();

	return 0;
}
