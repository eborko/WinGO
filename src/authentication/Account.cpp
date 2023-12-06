//
// Created by borko on 24.11.23..
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#include "Account.h"
#include "password-rules/PasswordSymbolRule.h"
#include "password-rules/PasswordLengthRule.h"
#include "password-rules/PasswordNumericRule.h"
#include "password-rules/PasswordUpperCharacterRule.h"
#include "username-rules/UserNameBlankSpaceRule.h"
#include "username-rules/UserNameLengthRule.h"
#include "vector"

class PasswordRule;
class UserNameRule;

using namespace std;

void Account::SetUserName(string userName) {
    if (m_userName != userName && IsValidUserName(userName))
        m_userName = userName;
}

string Account::GetUserName() const {
    return m_userName;
}

void Account::SetPassword(string password) {
    if (m_password != password && IsValidPassword(password))
        m_password = password;
}

string Account::GetPassword() const {
    return m_password;
}

bool Account::IsValidPassword(string password) {
    // Declare rules
    PasswordLengthRule passwordLengthRule;
    PasswordNumericRule passwordNumericRule;
    PasswordSymbolRule passwordSymbolRule;
    PasswordUpperCharacterRule passwordUpperCharacterRule;

    // Add rules
    vector<PasswordRule*> rules;
    rules.push_back(&passwordLengthRule);
    rules.push_back(&passwordNumericRule);
    rules.push_back(&passwordSymbolRule);
    rules.push_back(&passwordUpperCharacterRule);

    // Apply rules
    for (const auto& rule : rules) {
        if (!rule->IsRuleSatisfied(password)) return false;
    }

    return true;
}

bool Account::IsValidUserName(string userName) {
    // Declare rules
    UserNameBlankSpaceRule userNameBlankSpaceRule;
    UserNameLengthRule userNameLengthRule;

    // Add rules
    vector<UserNameRule*> rules;
    rules.push_back(&userNameLengthRule);
    rules.push_back(&userNameBlankSpaceRule);

    // Apply rules
    for (const auto& rule : rules) {
        if (!rule->IsRuleSatisfied(userName)) return false;
    }

    return true;
}

