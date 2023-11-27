//
// Created by borko on 11/26/23.
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#ifndef WINGO_PASSWORDLENGTHRULE_H
#define WINGO_PASSWORDLENGTHRULE_H

#include "PasswordRule.h"

class PasswordLengthRule : public PasswordRule {
public:
    /// Password must be between 8 and 12 characters - including 8 and 12.
    bool IsRuleSatisfied(std::string password) override;
};

#endif //WINGO_PASSWORDLENGTHRULE_H
