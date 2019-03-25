cmake_minimum_required(VERSION 3.0)
project(Ion)

set(CMAKE_CXX_STANDARD 11)
set(ROOT ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB ION_SRC "*.cpp" "*.h")
file(GLOB GEN_SRC "gen/*.cc" "gen/*.h")
file(GLOB_RECURSE MODULES_SRC "modules/*.cpp" "modules/*.h")

execute_process(COMMAND flex
        --outfile=${ROOT}/gen/ion.lex.cc
        --header-file=${ROOT}/gen/ion.lex.h
        ${ROOT}/grammar/ion.flex)
execute_process(COMMAND bison
        --output=${ROOT}/gen/ion.tab.cc
        --defines=${ROOT}/gen/ion.tab.h
        ${ROOT}/grammar/ion.y)

add_executable(Ion ${ION_SRC} ${GEN_SRC} ${MODULES_SRC})
target_include_directories(Ion PRIVATE ./)
target_include_directories(Ion PRIVATE ./gen)
target_include_directories(Ion PRIVATE ./modules)
target_include_directories(Ion PRIVATE ./lib)
target_include_directories(Ion PRIVATE ./lib/fmt/include)