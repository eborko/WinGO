//
// Created by borko on 11/25/23.
//

#ifndef WINGO_TESTUSER_H
#define WINGO_TESTUSER_H

#include <QObject>

namespace unit_tests {

    class TestUser : public QObject {
        Q_OBJECT

    private slots:
        void UserShouldHaveAccount();
    };

} // unit_tests

#endif //WINGO_TESTUSER_H
