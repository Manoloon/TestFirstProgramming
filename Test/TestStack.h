//
// Created by Manoloon on 11/04/2022.
//

#ifndef TESTFIRSTPROGRAMMING_TESTSTACK_H
#define TESTFIRSTPROGRAMMING_TESTSTACK_H
#include "../Stack.h"
#include <assert.h>
class Test{
    Stack MyStack;
public:
    void CreateOnePushOnePopOne_isEmpty()
    {
        Stack newStack;
        newStack.Push(1);
        newStack.Pop();
        assert(newStack.isEmpty());
    }
    void Push(int value)
    {
        MyStack.Push(value);
        assert(MyStack.isEmpty()==false);
    }
    void PushTwisePopTwise_notEmpty()
    {
        MyStack.Push(88);
        MyStack.Push(99);
        assert(MyStack.Pop() == 99);
        assert(MyStack.Pop() == 88);
        assert(!MyStack.isEmpty());
    }
};
#endif //TESTFIRSTPROGRAMMING_TESTSTACK_H
