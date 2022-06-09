cmake_minimum_required(VERSION 3.17)
project(untitled35)

set(CMAKE_CXX_STANDARD 17)
find_package (Eigen3 REQUIRED)
find_package(Boost REQUIRED COMPONENTS ALL)

add_executable(untitled35 main.cpp Obj.cpp Obj.h watch.cpp watch.h)
target_link_libraries(untitled35 ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
target_link_libraries(untitled35 Eigen3::Eigen)