cmake_minimum_required(VERSION 3.10.0)
project(lab04 VERSION 0.1.0 LANGUAGES C CXX)
include_directories(logic interface)
add_executable(lab04 main.cpp logic/TagGame.cpp logic/CreateTagGame.cpp interface/Console.cpp log/ILogger.cpp log/CreateLogger.cpp)