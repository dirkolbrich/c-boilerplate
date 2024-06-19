# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "./*.h")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "./*.cpp")

# Make an automatic library - will be static or dynamic based on user setting
add_library(boilerplate ${HEADER_LIST} ${SOURCE_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(boilerplate PUBLIC ../.)

# This depends on (header only) boost
# target_link_libraries(boilerplate PRIVATE Boost::boost)

# All users of this library will need at least C++20
target_compile_features(boilerplate PUBLIC cxx_std_20)
