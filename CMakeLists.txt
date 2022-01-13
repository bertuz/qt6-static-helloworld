cmake_minimum_required(VERSION 3.22.1)
project(tst2)

set(CMAKE_CXX_STANDARD 20)

include(build/conanbuildinfo.cmake)
conan_basic_setup()

# assume built-in pthreads on MacOS
IF(APPLE)
    set(CMAKE_THREAD_LIBS_INIT "-lpthread")
    set(CMAKE_HAVE_THREADS_LIBRARY 1)
    set(CMAKE_USE_WIN32_THREADS_INIT 0)
    set(CMAKE_USE_PTHREADS_INIT 1)
    set(THREADS_PREFER_PTHREAD_FLAG ON)
ENDIF()

find_package(Qt6 COMPONENTS Core)
set (PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} src/main.cpp src/MyWindow.cpp  src/MyWindow.h)
set_target_properties(${PROJECT_NAME} PROPERTIES AUTOMOC ON)
set_property(GLOBAL PROPERTY CMAKE_AUTOMOC ON)

#target_sources(test PRIVATE src/main.cpp)
#target_sources(test PRIVATE src/mainwindow.cpp)


target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
