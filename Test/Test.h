//
// Created by Manoloon on 08/04/2022.
//
#ifndef TESTFIRSTPROGRAMMING_TEST_H
#define TESTFIRSTPROGRAMMING_TEST_H
#include "catch.hpp"
#include "../Stack.h"
#define CATCH_CONFIG_MAIN

    Stack MyStack;
    TEST_CASE("IsEmpty","[isEmpty]")
    {
        REQUIRE(MyStack.isEmpty() == false);
    }
/*
TEST_CASE("PushAndNotEmpty","[Push]")
    {
        MyStack.Push(1);
        REQUIRE(MyStack.isEmpty()== true);
    }
    TEST_CASE ("One Pop and Is Empty")
    {
        MyStack.Pop();
        REQUIRE(MyStack.isEmpty() == false);
    }
    /*
    void AfterOnePushAndOnePopIsEmpty(int )
    {
        MyStack.Push(1);

    }*/
#endif //TESTFIRSTPROGRAMMING_TEST_H
