cmake_minimum_required(VERSION 3.19)
project(HelloWindows C)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Define runtime library flags
if(MSVC)
    set(MULTITHREADED_FLAG "$<$<CONFIG:Debug>:MultiThreadedDebug>$<$<NOT:$<CONFIG:Debug>>:MultiThreaded>")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "${MULTITHREADED_FLAG}")
endif()

# Add executable
add_executable(HelloWindows src/main.c)

target_link_options(HelloWindows PRIVATE /SUBSYSTEM:WINDOWS)
