cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 14)
project(design-pattern)
add_executable(app src/main.cpp src/memento/editor.cpp src/memento/editorState.cpp src/memento/history.cpp)