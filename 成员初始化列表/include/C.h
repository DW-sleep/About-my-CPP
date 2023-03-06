#pragma once
#include<iostream>
#include"A.h"
#include"B.h"

class C
{
public:

    C();
    C(const A &testA, const B &testB);
    
    A A1;
    B B1;
};