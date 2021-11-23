//
// Created by season on 2021/11/23.
//

#include <Logger.h>
#include "VectorTest.h"
#include "iostream"
using namespace std;
VectorTest::VectorTest() {
    LOG_ENTRY();
}

VectorTest::~VectorTest() {
    LOG_ENTRY();
}

VectorTestWithMoveCtor::VectorTestWithMoveCtor() {
    LOG_ENTRY();
}

VectorTestWithMoveCtor::~VectorTestWithMoveCtor() {
    LOG_ENTRY();
}

VectorTestWithMoveCtor::VectorTestWithMoveCtor(VectorTestWithMoveCtor &&_other) {
    LOG_ENTRY();
    _value = _other._value;
}

VectorTestWithMoveCtor& VectorTestWithMoveCtor::operator=(VectorTestWithMoveCtor &&_other) {
    LOG_ENTRY();
    _value = _other._value;
    return  *this;
}

VectorTestWithMoveCtor& VectorTestWithMoveCtor::operator=(const VectorTestWithMoveCtor &_other) {
    LOG_ENTRY();
    _value = _other._value;
    return *this;
}
