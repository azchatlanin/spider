load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "packages",
  srcs = ["packages.cpp"],
  hdrs = ["packages.hpp"],
  visibility = [
    "//visibility:public",
  ],
  deps = [
    "@com_github_gflags_gflags//:gflags",
    "@glog",
  ]
)
