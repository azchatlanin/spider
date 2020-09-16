load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "analyzer",
  srcs = ["analyzer.cpp"],
  hdrs = ["analyzer.hpp"],
  visibility = [
    "//visibility:public",
  ],
  deps = [
    "@com_github_gflags_gflags//:gflags",
    "@glog",
    "//src/packages:packages",
  ]
)
