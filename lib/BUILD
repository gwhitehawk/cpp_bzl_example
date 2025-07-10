load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_library(
    name = "letter_sorter",
    srcs = ["letter_sorter.cc"],
    hdrs = ["letter_sorter.h"],
    visibility = ["//main:__pkg__"],
)

cc_test(
    name = "letter_sorter_test",
    srcs = ["letter_sorter_test.cc"],
    deps = [
        ":letter_sorter",
        "@googletest//:gtest_main",
        "@googletest//:gtest",
    ],
)
