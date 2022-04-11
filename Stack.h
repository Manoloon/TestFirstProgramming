//
// Created by Manoloon on 10/04/2022.
//
#ifndef TESTFIRSTPROGRAMMING_STACK_H
#define TESTFIRSTPROGRAMMING_STACK_H
class Stack
{
    int m_size=0;
    int m_elements[2];
public:
    bool isEmpty() const
    {
        return m_size < 1;
    }
    void Push(int Element)
    {
        m_elements[m_size++] = Element;
        ;
    }
    int Pop()
    {
        if(isEmpty()){return -1;}
        return m_elements[--m_size];
    }
};
#endif //TESTFIRSTPROGRAMMING_STACK_H
