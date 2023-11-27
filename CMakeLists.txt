cmake_minimum_required(VERSION 3.22.1)
project(WinGO)

set(CMAKE_CXX_STANDARD 17)

# Set CMAKE_PREFIX_PATH
set(CMAKE_PREFIX_PATH "/home/borko/Qt/6.6.0/gcc_64" ${CMAKE_PREFIX_PATH})

# OR Set Qt6_DIR
set(Qt6_DIR "/home/borko/Qt/6.6.0/gcc_64/lib/cmake/Qt6")

# Find Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(WinGO_Lib SHARED
        src/authentication/User.cpp
        src/authentication/User.h
        src/authentication/Account.cpp
        src/authentication/Account.h
        src/authentication/password-rules/PasswordLengthRule.cpp
        src/authentication/password-rules/PasswordRule.h
        src/authentication/password-rules/PasswordNumericRule.cpp
        src/authentication/password-rules/PasswordSymbolRule.cpp
        src/authentication/password-rules/PasswordLengthRule.h
        src/authentication/password-rules/PasswordNumericRule.h
        src/authentication/password-rules/PasswordSymbolRule.h
        src/authentication/password-rules/PasswordRule.cpp
        src/authentication/password-rules/PasswordUpperCharacterRule.cpp
        src/authentication/password-rules/PasswordUpperCharacterRule.h
)

# Set the ENABLE_EXPORTS property for the library
set_property(TARGET WinGO_Lib PROPERTY ENABLE_EXPORTS ON)

add_executable(WinGO main.cpp)

# Link your executable with Qt components
target_link_libraries(WinGO WinGO_Lib Qt6::Test Qt6::Core Qt6::Widgets)

# Add the tests directory to the build
add_subdirectory(tests/unit-tests)

# Enable testing
enable_testing()