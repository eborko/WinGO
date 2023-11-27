cmake_minimum_required(VERSION 3.22.1)

# Set up the test executable
add_executable(UnitTests unit_main.cpp
        unit_main.cpp
        TestAccount.cpp
        TestAccount.h
        TestUser.cpp
        TestUser.h)

# Link executable with Qt components
target_link_libraries(UnitTests WinGO_Lib Qt6::Test Qt6::Core Qt6::Widgets)

enable_testing()

# Add the tests directory to the build
add_subdirectory(authentication)

add_test(TestUser UnitTests)
add_test(TestAccount UnitTests)