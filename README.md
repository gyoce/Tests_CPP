# Test your C++ code with GoogleTest

This is a repo to help you start your journey about testing your C++ code with GoogleTest and CMake with >= C++14.
This repo depends on [GoogleTest](https://github.com/google/googletest).


# Explanations
.
\- - src

\- - - - MyProject

\- - - - - - src

\- - - - - - - - MyClass.cpp

\- - - - - - - - MyClass.hpp

\- - - - - - CMakeLists.txt **<- define library MyLibrary**

\- - - - Main.cpp

\- - - - CMakeLists.txt **<- use MyLibrary & define main executable**

\- - tests

\- - - - UnitTests

\- - - - - - MyClassTest.cpp 

\- - - - CMakeLists.txt **<- use MyLibrary & define test executable**



## How to clone
```bash
git clone --recurse-submodules https://github.com/gyoce/Tests_CPP.git
```

## How to build with CMake CLI

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## How to build with Visual Studio :
1. Open the directory in Visual Studio
2. Press CTRL + SHIFT + B

## How to run with CMake CLI  :
After building do :
```bash
./[PATH_TO]/CPP_Tests.exe
```
to run the test executable and :
```bash
./[PATH_TO]/CPP.exe
```
to run the main executable

## How to run with Visual Studio :
1. Open the directory in Visual Studio
2. Select Startup Item (CPP.exe for main & CPP_Tests.exe for tests)

## Exemple with Visual Studio 17 2022 Generator & CMake CLI
```bash
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022"
cmake --build .
.\tests\Debug\CPP_Tests.exe
```
