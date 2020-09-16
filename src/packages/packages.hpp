#pragma once

#include <string>
#include <vector>

class Packages
{
 public:
  explicit Packages(const std::string path);
  ~Packages();

  void parse();
  std::vector<std::string>& get_data();

 private:
  const std::string path;
  std::vector<std::string> data;
  std::vector<std::string> data;
  // MAYBE HERE
  // std::multiset<IP, std::greater<IP>> ip_pool; data;
};
