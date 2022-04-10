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
    int values=0;
public:
    bool isEmpty() const {
        return bisEmpty;}
    void Push(int Element)
    {
        values++;
        bisEmpty = false;
    };
    void Pop()
    {
        if(!isEmpty())
        {
            values--;
        }
    }
 };
class TestStack
{
    Stack MyStack;
public:
    void CreateEmptyStack()
    {
        Stack MyStack;
        REQUIRE(MyStack.isEmpty());
    }
    void Push(int)
    {
        MyStack.Push(0);
        REQUIRE(!MyStack.isEmpty());
    }
    void Pop()
    {
        MyStack.Pop();
        REQUIRE(MyStack.isEmpty());
    }
};
#endif //TESTFIRSTPROGRAMMING_STACK_H
