//
// Created by borko on 24.11.23..
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#ifndef WINGO_ACCOUNT_H
#define WINGO_ACCOUNT_H

#include "string"
#include "vector"

// Avoid cyclic include behavior
class TestAccount;

using namespace std;

class Account {
private:
    string m_userName;
    string m_password;
public:
    void SetUserName(string userName);
    string GetUserName() const;
    void SetPassword(string password);
    string GetPassword() const;

    /// Password must satisfy rules below:
    /// \Rule1 Password must be between 8 and 12 characters - including 8 and 12.
    /// Implementation can be found in PasswordLengthRule.cpp.
    /// \Rule2 Password must contain at least one numeric character.
    /// Implementation can be found in PasswordNumericRule.cpp.
    /// \Rule3 Password must contain at least one symbol character.
    /// Implementation can be found in PasswordSymbolRule.cpp.
    /// \Rule4 Password must contain at least one upper case character
    /// Implementation can be found in PasswordUpperCharacterRule.cpp
    /// \param password string to validate
    /// \return true if password is valid, otherwise returns false
    static bool IsValidPassword(string password);

    /// UserName must satisfy rules below:
    /// \Rule1 UserName must be between 3 and 9 characters in length - including 3 and 9
    /// Implementation can be found in UserNameLengthRule.cpp
    /// \Rule2 UserName must not contain blank space character
    /// Implementation can be found in UserNameBlankSpaceRule.cpp
    /// \param userName string to validate
    /// \return
    static bool IsValidUserName(string userName);
};


#endif //WINGO_ACCOUNT_H
