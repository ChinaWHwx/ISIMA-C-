#include <iostream>
using namespace std;

void swap2(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    swap2(&a, &b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //system("pause");
    return 0;
}

//这里swap2接受的是地址，可以直接操作实参的值
//swap2可行