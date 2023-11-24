//
// Created by borko on 24.11.23..
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#include "TestUserAuthentication.h"
#include "../../src/authentication/User.h"
#include "../../src/authentication/Account.h"
#include "QtTest"

namespace unit_tests {
    void TestUserAuthentication::UserShouldHaveAccount() {
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