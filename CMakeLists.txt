cmake_minimum_required(VERSION 3.17)
project(StringAlgorithms)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost REQUIRED)

if (Boost_FOUND)
    message(STATUS "         version:${Boost_VERSION}")
    message(STATUS "         include_dirs:${Boost_INCLUDE_DIRS}")
    message(STATUS "         library_dirs:${Boost_LIBRARY_DIRS}")
    message(STATUS "         libs:${Boost_LIBRARIES}")
    #list(APPEND LINK_LIST ${Boost_LIBRARY_DIRS}/libboost_regex-mgw49-mt-x64-1_69.a)   windows
    list(APPEND LINK_LIST boost_regex)
else()
    message(FATAL_ERROR "Boost not found")

endif ()

include_directories(${PROJECT_SOURCE_DIR}/include)

set(STRING_ALGORITHMS_NAME string_algorithms)

add_library(${STRING_ALGORITHMS_NAME}
        src/LargestCommonSubstring.cpp
        src/Utility.cpp
        src/DiffCharaNum.cpp)

target_include_directories(${STRING_ALGORITHMS_NAME} PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS})

target_link_libraries(${STRING_ALGORITHMS_NAME} ${LINK_LIST})



add_executable(StringAlgorithms demo.cpp)

#target_include_directories(${PROJECT_NAME} PUBLIC ${Boost_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${STRING_ALGORITHMS_NAME})