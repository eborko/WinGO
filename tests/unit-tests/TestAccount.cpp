//
// Created by borko on 11/25/23.
//

#include "TestAccount.h"
#include "../../src/authentication/Account.h"
#include <QTest>

namespace unit_tests {
    using namespace std;

    void TestAccount::PasswordShouldFollowPasswordPolicy() {
        Account account;

        // Try with bad password length
        QVERIFY(!account.IsValidPassword("fds"));
        QVERIFY(!account.IsValidPassword("fdsretrertyui"));

        // Try with correct password length and number but without a symbol
        QVERIFY(!account.IsValidPassword("asdfghjkl3"));

        // Try with correct password length and symbol but without number
        QVERIFY(!account.IsValidPassword("asdfghjkl#"));

        // Try with correct password
        QVERIFY(account.IsValidPassword("borko123456#"));

    }

} // unit_tests