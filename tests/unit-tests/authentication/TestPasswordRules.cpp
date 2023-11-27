//
// Created by borko on 11/26/23.
//

#include "TestPasswordRules.h"
#include "../../../src/authentication//password-rules/PasswordLengthRule.h"
#include "../../../src/authentication//password-rules/PasswordNumericRule.h"
#include "../../../src/authentication//password-rules/PasswordSymbolRule.h"
#include "QTest"

void unit_tests::TestPasswordRules::PasswordShouldHaveLengthBetweenEightAndTwelveCharacters() {
    PasswordLengthRule passwordLengthRule;

    // Try with lower than 8 characters
    QVERIFY(!passwordLengthRule.IsRuleSatisfied("dsa"));

    // Try with 8 characters
    QVERIFY(passwordLengthRule.IsRuleSatisfied("asdfghjk"));

    // Try with 10 characters
    QVERIFY(passwordLengthRule.IsRuleSatisfied("asdfghjklq"));

    // Try with 12 characters
    QVERIFY(passwordLengthRule.IsRuleSatisfied("asdfghjklqwe"));

    // Try with more than 12 characters
    QVERIFY(!passwordLengthRule.IsRuleSatisfied("asdfghjklqwere"));
}

void unit_tests::TestPasswordRules::PasswordShouldHaveAtLeastOneNumericCharacter() {
    PasswordNumericRule passwordNumericRule;

    // Try without Numeric character
    QVERIFY(!passwordNumericRule.IsRuleSatisfied("dsada"));

    // Try with Numeric character
    QVERIFY(passwordNumericRule.IsRuleSatisfied("ds5ada"));
}

void unit_tests::TestPasswordRules::PasswordShouldHaveAtLeastOneSymbolCharacter() {
    PasswordSymbolRule passwordSymbolRule;

    // Try with Symbol character
    QVERIFY(passwordSymbolRule.IsRuleSatisfied("dsfs*da"));

    // Try without Symbol character
    QVERIFY(!passwordSymbolRule.IsRuleSatisfied("fsfsdfs"));
}
