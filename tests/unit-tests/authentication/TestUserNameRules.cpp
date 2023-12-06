//
// Created by borko on 11/27/23.
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#include "TestUserNameRules.h"
#include "UserNameBlankSpaceRule.h"
#include "UserNameLengthRule.h"
#include "QTest"

void unit_tests::TestUserNameRules::UserNameShouldNotContainBlankSpace() {
    UserNameBlankSpaceRule userNameBlankSpaceRule;

    // Try with blank space character
    QVERIFY(!userNameBlankSpaceRule.IsRuleSatisfied("string with blank spaces"));

    // Try without blank character
    QVERIFY(userNameBlankSpaceRule.IsRuleSatisfied("stringWithoutSpaces"));
}

void unit_tests::TestUserNameRules::UserNameLengthShouldBeBetweenThreeAndNineCharacters() {
    UserNameLengthRule userNameLengthRule;

    // Try with length of 2 characters
    QVERIFY(!userNameLengthRule.IsRuleSatisfied("ds"));

    // Try with length of 10 characters
    QVERIFY(!userNameLengthRule.IsRuleSatisfied("asdfghjkli"));

    // Try with length of 6 characters
    QVERIFY(userNameLengthRule.IsRuleSatisfied("dsad"));
}
