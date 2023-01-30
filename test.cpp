#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    /*
    int &b;
    &b = a; 会引发错误，声明引用必须初始化
    */
    int &b = a;
    int *d = &b;
    int *c = &a;

    cout<< &a <<endl;
    cout<< &b <<endl;
    cout<< &c <<endl;
    cout<< &d <<endl;
    //0x7fff29a4083c
    //0x7fff29a4083c
    //0x7fff29a40848
    //0x7fff29a40840

    return 0;
}

//从c++的层面看，引用是变量的别名，对引用进行操作其实就是对变量本身操作，
//而指针是通过它所保存的地址来对变量进行间接的操作；
//引用和指针一样，都会申请一段内存用来存放变量的地址，我们可以认为引用是匿名指针；
//指针本身的值可以修改，也就是说指针可以指向不同的变量，而引用在声明时初始化以后不能再指向别的变量，从这个角度而言，引用可以认为是常量指针。