CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(CircleTest
        test.cpp
        Circle.cpp
)

TARGET_LINK_LIBRARIES(CircleTest gtest)
TARGET_COMPILE_DEFINITIONS(CircleTest PRIVATE gtest_disable_pthreads=ON)



