# Copyright (c) 2021 HPMicro
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.13)

find_package(hpm-sdk REQUIRED HINTS $ENV{HPM_SDK_BASE})

project(tiny_maix_benchmark)

sdk_compile_definitions(-DBOARD_SHOW_CLOCK=1)

# TinyMaix include
sdk_app_inc(TinyMaix/examples)
sdk_app_inc(TinyMaix/include)
sdk_app_inc(TinyMaix/src)

# TinyMaix src
sdk_app_src(TinyMaix/src/tm_layers_fp8.c)
sdk_app_src(TinyMaix/src/tm_layers_O1.c)
sdk_app_src(TinyMaix/src/tm_layers.c)
sdk_app_src(TinyMaix/src/tm_model.c)
sdk_app_src(TinyMaix/src/tm_stat.c)

# benchmark src
sdk_app_src(src/benchmark.c)

generate_ses_project()
