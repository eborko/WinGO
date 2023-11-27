//
// Created by borko on 11/25/23.
//

#include "TestAccount.h"
#include "../../src/authentication/Account.h"
#include <QTest>

namespace unit_tests {
    using namespace std;

    void TestAccount::PasswordShouldFollowPasswordPolicy() {
        // Try with bad password length
        QVERIFY(!Account::IsValidPassword("fds"));
        QVERIFY(!Account::IsValidPassword("fdsretrertyui"));

        // Try with correct password length and number but without a symbol
        QVERIFY(!Account::IsValidPassword("asdfghjkl3"));

        // Try with correct password length and symbol but without number
        QVERIFY(!Account::IsValidPassword("asdfghjkl#"));

        // Try with correct password
        QVERIFY(Account::IsValidPassword("borko123456#"));

    }

    void TestAccount::UserNameShouldFollowUserNamePolicy() {
        // Try with bad username length
        QVERIFY(!Account::IsValidUserName("ds"));
        QVERIFY(!Account::IsValidUserName("fdsdfdfsdfsdf"));

        // Try with correct username length but with one blank space
        QVERIFY(!Account::IsValidUserName("dad asd"));

        // Try with correct username
        QVERIFY(Account::IsValidUserName("fdsfs12"));
    }

} // unit_tests