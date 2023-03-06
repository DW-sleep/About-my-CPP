#include<iostream>
#include"A.h"
#include"B.h"
#include"C.h"

int main()
{
    A objectA(1);
    B objectB(2);

    //std::cout<<"-----------------"<<std::endl;

    //成员初始化顺序是按照类中变量定义的顺序来的，而不是初始化列表中的顺序
    C c(objectA,objectB);
    std::cout<<c.A1.a<<std::endl;
    std::cout<<c.B1.b<<std::endl;
}