#include <iostream>
#include "Stack.h"
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
int main()
{
    Test test;
    test.CreateOnePushOnePopOne_isEmpty();
    test.Push(1);
    test.PushTwisePopTwise_notEmpty();
    return 0;
}
