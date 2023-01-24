#include <iostream>
using namespace std;

void swap6(int **a, int **b){
    int tmp;
    tmp = **a;
    **a = **b;
    **b = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    int *aPtr = &a;//指向数据的指针，表示读取该地址的值
    int *bPtr = &b;//指向数据的指针
    int **aaPtr = &aPtr;//指向指针的地址的指针
    int **bbPtr = &bPtr;//指向指针的地址的指针
    swap6(aaPtr, bbPtr);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //system("pause");
    return 0;
}

//交换成功。同样的，比如int **value， 最接近value的是*，说明value是一个指针，在前一个是*，
//说明是一个指向指针的指针，这样是合法的，那么如何访问value代表的实际参数的值呢？
//很简单，用**value就可以了，

//&是取地址操作符，而*是取值操作符。