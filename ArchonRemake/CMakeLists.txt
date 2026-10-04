add_subdirectory(third_party/enet)

include(FetchContent)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY "https://github.com/raysan5/raylib.git"
    GIT_TAG "master" # Or target a specific version like "5.0"
)

FetchContent_MakeAvailable(raylib)

include_directories("include")
include_directories("third_party/enet/include")

add_executable(${PROJECT_NAME} "src/ArchonRemake.cpp"  )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY COMPILE_WARNING_AS_ERROR ON)

target_link_libraries(${PROJECT_NAME} PRIVATE enet_static)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)