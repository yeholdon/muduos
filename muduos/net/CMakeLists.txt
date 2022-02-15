cmake_minimum_required (VERSION 3.5)

project(netLib)

# Add source code files
add_library(${PROJECT_NAME}
	EventLoop.cpp
)
