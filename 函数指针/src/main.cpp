#include <iostream>
#include "fun.h"

void Fun1(int a)
{
    std::cout << "成功调用了函数Fun1" << std::endl;
    std::cout << "a的值为：" << a << std::endl;
}

int Fun2(void)
{
    std::cout << "成功调用了函数Fun2" << std::endl;
    return 100;
}

// 定义一个返回值为void，参数为int的函数指针funPtr1
void (*funPtr1)(int);
// 定义一个返回值为int，参数为void的函数指针funPtr2
int (*funPtr2)(void);

// funPtr1 = Fun1;  函数指针指向函数的过程一定要在main外进行
// funPtr2 = Fun2;

int main()
{
    funPtr1 = &Fun1;
    funPtr2 = Fun2;  //加不加&都可以

    funPtr1(10);
    int x = funPtr2();
    std::cout<<x<<std::endl;
}
