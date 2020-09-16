#pragma once

#include <vector>
#include <string>

#include "src/packages/packages.hpp"

class Analyzer
{
 public:
  Analyzer();
  ~Analyzer();

  void start(const std::vector<std::string>& ps);

 private:
  std::vector<Packages> pkgs;
};