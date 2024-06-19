# C++ Project Boilerplate

A C++ project boilerplate folder with all the things I like to setup a new project by default.

## Features

- header and implementation files next to each other in the same folder
- clang-format setup to make your code look good
- cmake setup to build the project, using presets to build for debug and release on different architectures
- clang-tidy for static analysis
- unit tests and maybe even integration tests -> googletest or catch2 yet to decide
- an `ARCHITECTURE.md` file to explain the major architectural decisions for the code base

- cmake use the latest version for cmkae
- C++ modules support?

## Folder structure

cmake/ - split up cmake files
docs/ - documentation and notes, preferably automatically build via doxygen
examples/ - show the basic funvtionality in case of a library project
external/ - any outside libraries, preferably as git submodule
src/ - THE source code of this project
tests/ - unit and integration tests
tools/ - project internal tools like code generators etc.

## how to use this biolerplate project

- clone
- delete git history
- adjust cmake to you projects name
- initial commit