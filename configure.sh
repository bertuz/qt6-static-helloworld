#!/bin/sh
export CMAKE_PREFIX_PATH=/Users/matteo/.conan/data/qtdeclarative/6.2.2/qt/everywhere/package/d460084946e13a2e2bd394e9438019159b9b7507:/Users/matteo/.conan/data/qtsvg/6.2.2/qt/everywhere/package/3ae3af77b5cdde89b25cbdaab8903af46f1df790:/Users/matteo/.conan/data/qtshadertools/6.2.2/qt/everywhere/package/3ae3af77b5cdde89b25cbdaab8903af46f1df790:/Users/matteo/.conan/data/qtbase/6.2.2/qt/everywhere/package/2b03afe371e4c5cfd9436080f6a933311ea6faef
mkdir -p build && cd build && conan install ../ --build=missing && cmake -S ../ -B ./
