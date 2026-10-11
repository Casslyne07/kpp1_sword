cmake_minimum_required(VERSION 3.10) 

project(kpp1_sword)

include_directories(include) 

add_library(sword_lib STATIC
    src/sword.cpp
    src/longsword.cpp
    src/rapier.cpp
) 

add_executable(sword_app src/main.cpp) 

target_link_libraries(sword_app sword_lib)
install(TARGETS sword_app DESTINATION bin)
install(TARGETS sword_lib DESTINATION lib)
install(DIRECTORY include/ DESTINATION include/kpp1_sword)

