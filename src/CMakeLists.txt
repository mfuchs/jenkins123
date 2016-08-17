add_library(libcalculate SHARED area.cpp area.h)
target_include_directories(libcalculate
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

add_executable(jenkins123 main.cpp)
target_link_libraries(jenkins123 Qt5::Core libcalculate)

add_subdirectory(unittests)
