//
// Created by borko on 11/25/23.
//

#ifndef WINGO_TESTACCOUNT_H
#define WINGO_TESTACCOUNT_H

#include <QObject>

namespace unit_tests {

    class TestAccount : public QObject {
        Q_OBJECT

    private slots:
        /// Password must follow rules below:
        /// \Rule1 Password must be between 8 and 12 characters - including 8 and 12.
        /// Implementation can be found in PasswordLengthRule.cpp.
        /// \Rule2 Password must contain at least one numeric character.
        /// Implementation can be found in PasswordNumericRule.cpp.
        /// \Rule3 Password must contain at least one symbol character.
        /// Implementation can be found in PasswordSymbolRule.cpp.
        /// \Rule4 Password must contain at least one upper case character
        /// Implementation can be found in PasswordUpperCharacterRule.cpp
        void PasswordShouldFollowPasswordPolicy();

        /// UserName must satisfy rules below:
        /// \Rule1 UserName must be between 3 and 9 characters in length - including 3 and 9
        /// Implementation can be found in UserNameLengthRule.cpp
        /// \Rule2 UserName must not contain blank space character
        /// Implementation can be found in UserNameBlankSpaceRule.cpp
        void UserNameShouldFollowUserNamePolicy();
    };

} // unit_tests

#endif //WINGO_TESTACCOUNT_H
