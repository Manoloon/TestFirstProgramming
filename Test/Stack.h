//
// Created by Manoloon on 08/04/2022.
//

#ifndef TESTFIRSTPROGRAMMING_STACK_H
#define TESTFIRSTPROGRAMMING_STACK_H
#include "catch.hpp"
#include <assert.h>
#define CATCH_CONFIG_MAIN
class Stack
 {
    bool bisEmpty = true;
public:
    bool isEmpty() const {
        return bisEmpty;}
    void Push(int Element)
    {
        bisEmpty = false;
    };
 };
class TestStack
{
    Stack MyStack;
public:
    void CreateEmptyStack()
    {
        Stack MyStack;
        assert(MyStack.isEmpty()==true);
    }
    void Push(int)
    {
        MyStack.Push(0);
        assert(MyStack.isEmpty()==false);
    }
};
#endif //TESTFIRSTPROGRAMMING_STACK_H
