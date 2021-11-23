//
// Created by season on 2021/11/23.
//

#ifndef MODERNCPP_VECTORTEST_H
#define MODERNCPP_VECTORTEST_H

//copy elision
//converting constructor
//copy constructor
//default constructor
//move constructor

class VectorTest {
public:
    VectorTest();
    ~VectorTest();
};
class VectorTestWithMoveCtor {
    int _value;
public:
    VectorTestWithMoveCtor();
    VectorTestWithMoveCtor(const VectorTestWithMoveCtor& _other){};
    VectorTestWithMoveCtor(VectorTestWithMoveCtor&& _other);
    VectorTestWithMoveCtor& operator=(VectorTestWithMoveCtor&& _other);
    VectorTestWithMoveCtor& operator=(const VectorTestWithMoveCtor& _other);
    ~VectorTestWithMoveCtor();
};


#endif //MODERNCPP_VECTORTEST_H
