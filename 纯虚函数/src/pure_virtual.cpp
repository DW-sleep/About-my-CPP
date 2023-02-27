#include<iostream>
#include"pure_virtual.h"

Base::Base()
{

}

//---------------------------------------------

Derived::Derived()
{

}

void Derived::show()
{
    std::cout<<"被重写的纯虚函数"<<std::endl;
}
