//
// Created by Manoloon on 08/04/2022.
//

#ifndef TESTFIRSTPROGRAMMING_STACK_H
#define TESTFIRSTPROGRAMMING_STACK_H
#include "catch.hpp"
#define CATCH_CONFIG_MAIN
class Stack
 {
public:
    bool isEmpty() const {return true;}
    void Push(int);
 };
class TestStack
{
public:

    void CreateEmptyStack()
    {
        Stack MyStack;
        MyStack.isEmpty();
    }
    void Push(int)
    {
        Stack MyStack;
        MyStack.Push(1);
    }
};
#endif //TESTFIRSTPROGRAMMING_STACK_H
