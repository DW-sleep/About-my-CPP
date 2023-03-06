#include<iostream>
#include"A.h"

A::A()
{
    std::cout<<"A的构造函数"<<std::endl;
}

A::A(const int &a1)
{
    this->a = a1;
}