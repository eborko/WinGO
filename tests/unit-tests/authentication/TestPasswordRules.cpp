//
// Created by borko on 11/26/23.
//

#include "TestPasswordRules.h"
#include "PasswordLengthRule.h"
#include "PasswordNumericRule.h"
#include "PasswordSymbolRule.h"
#include "PasswordUpperCharacterRule.h"
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

void unit_tests::TestPasswordRules::PasswordShouldHaveAtLeastOneUpperCharacter() {
    PasswordUpperCharacterRule passwordUpperCharacterRule;

    // Try with upper case character
    QVERIFY(passwordUpperCharacterRule.IsRuleSatisfied("dasdaDss"));

    // Try without upper case character
    QVERIFY(!passwordUpperCharacterRule.IsRuleSatisfied("dasfsdf"));
}
