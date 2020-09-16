load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
  name = "spider",
  srcs = ["main.cpp"],
  deps = [
    "//src/analyzer:analyzer",
    "@com_github_gflags_gflags//:gflags",
    "@glog",
  ]
)