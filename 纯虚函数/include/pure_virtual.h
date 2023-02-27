#pragma once
#include<iostream>

class Base
{
private:
    int a;

public:
    Base();
    virtual void show() = 0;
};

class Derived : public Base
{
private:
    int b;

public:
    Derived();
    void show();
};