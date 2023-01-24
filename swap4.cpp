#include <iostream>
using namespace std;

void swap5(int *&a, int *&b){//操作的是地址，即可改变实参
    int tem = *a;
    *a = *b;
    *b = tem;
}

int main(){
    int a = 1;
    int b = 2;

    int *aPtr = &a;
    int *bPtr = &b;
    int *&arPtr = aPtr;//实际上这里的int *& 是引用，即aPtr指针的别名
    int *&brPtr = bPtr;

    swap5(arPtr, brPtr);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //system("pause");
    return 0;
}

//int&* value不合法