# only for cmake --version >= 3.16.3
cmake_minimum_required(VERSION 3.16.3)

# project name
project(calc)

# creates the variable EXEC and sets it to calc
set(EXEC calc)

# I../includes
include_directories(includes)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/*.c)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})
