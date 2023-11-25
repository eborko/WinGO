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

    /// Password must follow rules below:
    /// Rule 1: Password must have between 8 and 12 characters including 8 and 12
    /// Rule 2: Password
    /// \param password string to validate
    /// \return
private:
    bool IsValidPassword(string password);

    friend class TestAccount;
};


#endif //WINGO_ACCOUNT_H
