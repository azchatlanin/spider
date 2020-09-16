#include "packages.hpp"

#include <sstream>
#include <fstream>

#include "glog/logging.h"
#include "glog/stl_logging.h"

Packages::Packages(const std::string path) : path(path)
{
}

Packages::~Packages()
{
  LOG(INFO) << "Packages "
            << "descriptor";
}

void Packages::parse()
{
  std::ifstream file(path);
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      data.push_back(line.c_str());
    }
    file.close();
  }
}

std::vector<std::string>& Packages::get_data()
{
  return data;
}