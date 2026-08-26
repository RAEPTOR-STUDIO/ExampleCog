cmake_minimum_required(VERSION 3.16)
project(ExampleCog LANGUAGES C)
find_package(RaeptorCogs CONFIG REQUIRED)
find_package(Cog CONFIG REQUIRED)
CogCreate(${CMAKE_PROJECT_NAME}
  src/RaeptorCogs/ExampleCog/cog-main.c
)
