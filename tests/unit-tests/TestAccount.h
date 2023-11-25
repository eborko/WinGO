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
        void PasswordShouldFollowPasswordPolicy();
    };

} // unit_tests

#endif //WINGO_TESTACCOUNT_H
