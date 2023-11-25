//
// Created by borko on 11/25/23.
//

#include "TestUser.h"
#include "../../src/authentication/User.h"
#include "../../src/authentication/Account.h"
#include <QTest>

namespace unit_tests {
    using namespace unit_tests;
    void TestUser::UserShouldHaveAccount() {
        // Create a test user and account
        User* testUser = new User();
        Account* testAccount = new Account();

        // Set the account for the test user
        testUser->SetAccount(testAccount);

        // Get the account associated with the test user
        Account* retrievedAccount = testUser->GetAccount();

        // Verify that the retrieved account matches the initially set account
        QVERIFY(retrievedAccount == testAccount);

        // Clean up allocated memory
        delete testUser;
        delete testAccount;
    }
} // unit_tests