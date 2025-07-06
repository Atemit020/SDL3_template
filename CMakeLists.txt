cmake_minimum_required(VERSION 3.16)
project(template)

# set the output directory for built objects.
# This makes sure that the dynamic library goes into the build directory automatically.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

add_subdirectory(SDL EXCLUDE_FROM_ALL)
add_subdirectory(SDL_image EXCLUDE_FROM_ALL)
add_subdirectory(SDL_ttf EXCLUDE_FROM_ALL)
add_subdirectory(SDL_mixer EXCLUDE_FROM_ALL)

# Create your game executable target as usual
add_executable(game  src/main.c src/vector.c)

# Link to the actual SDL3 library.
target_link_libraries(game PRIVATE SDL3_image::SDL3_image SDL3::SDL3 SDL3_ttf::SDL3_ttf SDL3_mixer::SDL3_mixer m)
target_include_directories(game PRIVATE ${src/include})

