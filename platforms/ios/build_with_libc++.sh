#!/usr/bin/env bash
set -e
./build.sh $* -DCMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD="c++20" -DCMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY="libc++"
