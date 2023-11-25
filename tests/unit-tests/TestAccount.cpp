//
// Created by borko on 11/25/23.
//

#include "TestAccount.h"
#include "../../src/authentication/Account.h"
#include <QTest>

namespace unit_tests {
    using namespace unit_tests;

    void TestAccount::AccountShouldHaveUserNameAndPassword() {
        Account* testAccount = new Account();
        std::string userName = "uname";
        std::string password = "pass";

        testAccount->SetUserName(userName);
        testAccount->SetPassword(password);

        QCOMPARE(testAccount->GetUserName(), userName);
        QCOMPARE(testAccount->GetPassword(), password);
    }

} // unit_tests