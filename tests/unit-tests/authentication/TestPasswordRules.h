//
// Created by borko on 11/26/23.
//

//This file is part of WinGO.
//WinGO is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//WinGO is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with WinGO. If not, see <https://www.gnu.org/licenses/>.

#ifndef WINGO_TESTPASSWORDRULES_H
#define WINGO_TESTPASSWORDRULES_H

#include "QObject"

namespace unit_tests{
    class TestPasswordRules : public QObject {
        Q_OBJECT

    private slots:
        void PasswordShouldHaveLengthBetweenEightAndTwelveCharacters();
        void PasswordShouldHaveAtLeastOneNumericCharacter();
        void PasswordShouldHaveAtLeastOneSymbolCharacter();
    };
}

#endif //WINGO_TESTPASSWORDRULES_H
