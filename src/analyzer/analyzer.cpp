#include "analyzer.hpp"

#include "glog/logging.h"
#include "glog/stl_logging.h"

Analyzer::Analyzer() {};

Analyzer::~Analyzer() {};

void Analyzer::start(const std::vector<std::string>& ps)
{
  for (const auto p : ps) {
    Packages pkg(p);
    pkg.parse();
    pkgs.push_back(pkg);
  }
};