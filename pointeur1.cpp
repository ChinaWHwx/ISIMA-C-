#include <iostream>

using namespace std;

int main()
{
    int   a = 4;
    int * p = nullptr;//初始化

    p = &a;//当&出现在等号右边时，即为取地址符号
    cout << *p << " " << p;

}

//4 0x7ffea754bb2c