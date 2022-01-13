#!/bin/sh
mkdir -p build && cd build && conan install ../ --build=missing && cmake -S ../ -B ./