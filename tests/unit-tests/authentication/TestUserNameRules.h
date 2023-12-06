//
// Created by borko on 11/27/23.
//

#ifndef WINGO_TESTUSERNAMERULES_H
#define WINGO_TESTUSERNAMERULES_H

#include "QObject"

namespace unit_tests {
    class TestUserNameRules : public QObject {
    Q_OBJECT

    private slots:
        void UserNameShouldNotContainBlankSpace();
        void UserNameLengthShouldBeBetweenThreeAndNineCharacters();
    };
}

#endif //WINGO_TESTUSERNAMERULES_H
