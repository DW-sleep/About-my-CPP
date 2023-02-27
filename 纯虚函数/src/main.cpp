#include<iostream>
#include<pure_virtual.h>

int main()
{
    //Base base;  
    //error:不允许使用抽象类定义对象

    //被重写的子类可以定义类对象
    Derived *derived1 = new Derived();
    derived1->show();

    //父类（抽象类）定义的对象指针可以指向被重写的子类的类对象
    Base *base1 = derived1;
    base1->show();
}