load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
  name = "spider",
  srcs = ["main.cpp"],
  deps = [
    "//src/packages:packages",
    "@spdlog//:headers",
  ]
)