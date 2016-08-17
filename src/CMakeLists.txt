add_library(libcalculate SHARED area.cpp)

add_executable(jenkins123 main.cpp)
target_link_libraries(jenkins123 Qt5::Core libcalculate)

add_qttest(sometest libcalculate)
