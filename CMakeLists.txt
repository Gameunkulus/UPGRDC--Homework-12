cmake_minimum_required(VERSION 3.2)

set(PostgreSQL_ADDITIONAL_VERSIONS "15")

project(MyProject1)

add_executable(MyProject1 main.cpp)

add_subdirectory("C:\Users\bugr2\libpq" libpqxx-build)

target_compile_features(MyProject1 PRIVATE cxx_std_17)

target_link_libraries(MyProject1 PRIVATE pqxx)