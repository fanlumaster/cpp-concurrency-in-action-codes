cmake_minimum_required(VERSION 3.27.0)
project(linuxcppdemo VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# set output executable file directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./includes/")

set(MY_EXECUTABLE_NAME "linuxcppdemo")

add_executable(
  ${MY_EXECUTABLE_NAME}
  "src/ch01/p14_1.cpp"
)
