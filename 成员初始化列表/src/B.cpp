#include<iostream>
#include"B.h"

B::B()
{
    std::cout<<"B的构造函数"<<std::endl;
}

B::B(const int &b1)
{
    this->b = b1;
}
