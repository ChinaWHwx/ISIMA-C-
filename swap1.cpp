#include <iostream>
using namespace std;

void swap1(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a = 1;
    int b = 2;
    swap1(1, 2);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}

//按值传递实际上函数不会访问实参。
//函数处理的是本地的拷贝，这些拷贝值被存储在运行栈中。
//函数结束，这些值消失。
//所以按值传递swap失败。