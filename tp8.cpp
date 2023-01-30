#include<iostream>

int main()
{
int  a = 3;
int  b = a;
int& c = a;

std::cout << a << " " << b << " " << c << std::endl;//333
b = 4;
std::cout << a << " " << b << " " << c << std::endl;//343
c = 5;
std::cout << a << " " << b << " " << c << std::endl;545
a = 6;
std::cout << a << " " << b << " " << c << std::endl;646

}
//说明引用是变量的分身，指向的是同一片内存空间，修改变量本身则引用随之改变。
//反之，修改引用随之变量本身也发生改变。