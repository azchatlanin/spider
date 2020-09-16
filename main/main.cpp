#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

#include "glog/logging.h"
#include "glog/stl_logging.h"
#include "src/analyzer/analyzer.hpp"

/*
  1. Get list of files
  2. Create array of packages
*/

namespace fs = std::filesystem;
std::string path;
std::vector<std::string> ps;

int main(int argc, char* argv[])
{
  using namespace std::string_literals;
  google::InitGoogleLogging(argv[0]);
  FLAGS_alsologtostderr  = true;
  FLAGS_colorlogtostderr = true;

  LOG(INFO) << "Welcome to spider!";

  for (int i = 0; i < argc; ++i) {
    if (std::string(argv[i]) == "-p"s) {
      path = static_cast<std::string>(argv[i + 1]);
    }
  }

  for (const auto& entry : fs::directory_iterator(path))
    ps.push_back(static_cast<std::string>(entry.path()));

  Analyzer a;
  a.start(ps);

  return 0;
}
