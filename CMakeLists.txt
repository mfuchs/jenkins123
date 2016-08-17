cmake_minimum_required(VERSION 3.2)

enable_language(CXX)

function(require_cpp11 target)
    set_property(TARGET ${target} PROPERTY CXX_STANDARD 11)
    set_property(TARGET ${target} PROPERTY CXX_STANDARD_REQUIRED ON)
endfunction()

function(add_qttest test_name)
    add_executable(${test_name} "${test_name}.cpp")
    require_cpp11(${test_name})
    add_test(NAME ${test_name} COMMAND ${test_name})
    target_link_libraries(${test_name} Qt5::Test Qt5::Core ${ARGN})
endfunction()

project(Jenkins123)

include(CTest)
enable_testing()

# Tell CMake to run moc/rcc when necessary:
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 REQUIRED Core Test)

add_subdirectory(src)
