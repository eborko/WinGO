cmake_minimum_required(VERSION 3.22.1)

# Set up the test executable
add_executable(UnitTests unit_main.cpp
        TestUserAuthentication.h
        TestUserAuthentication.cpp
        unit_main.cpp)

# Link your executable with Qt components
target_link_libraries(UnitTests WinGO_Lib Qt6::Test Qt6::Core Qt6::Widgets)

enable_testing()
add_test(TestUserAuthentication UnitTests)