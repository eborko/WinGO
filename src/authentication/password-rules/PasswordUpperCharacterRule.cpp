//
// Created by borko on 11/27/23.
//

#include "PasswordUpperCharacterRule.h"

namespace unit_tests {
} // unit_tests
bool PasswordUpperCharacterRule::IsRuleSatisfied(string password) {
    for (char c : password) {
        if (c >= 'A' && c <= 'Z') return true;
    }
    return false;
}
