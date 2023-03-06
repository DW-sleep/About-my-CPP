#include<iostream>
//#include"A.h"
//#include"B.h"
#include"C.h"

C::C()
{
    std::cout<<"C的构造函数"<<std::endl;
}

C::C(const A &testA, const B &testB):A1(testA),B1(testB)
{
    
}