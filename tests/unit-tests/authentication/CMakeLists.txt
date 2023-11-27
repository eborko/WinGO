cmake_minimum_required(VERSION 3.22.1)

add_executable(Test_Auth auth_main.cpp
        TestPasswordRules.cpp
        TestPasswordRules.h
        TestUserNameRules.cpp
        TestUserNameRules.h)

target_link_libraries(Test_Auth WinGO_Lib Qt6::Test Qt6::Core Qt6::Widgets)

enable_testing()

add_test(TestPasswordRules Test_Auth)
add_test(TestUserNameRules Test_Auth)