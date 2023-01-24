#include <iostream>
using namespace std;

void swap3(int &a, int &b){//或者写作int &a, int &b
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    swap3(a, b);    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //system("pause");
    return 0;
}

//通过交换引用，改变实参的值
//swap2有效