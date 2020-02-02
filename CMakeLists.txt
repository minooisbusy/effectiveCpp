cmake_minimum_required( VERSION 3.0)

project( EffectiveCPP )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3 -march=native")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(
    ${PROJECT_SOURCE_DIR}
    )

add_executable( CopyConstructor src/ch1_copyConstructor.cc )

add_executable( initialization src/ch1_initialization.cc )

add_executable( explicit src/explicit.cc )
