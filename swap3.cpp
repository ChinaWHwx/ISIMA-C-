#include <iostream>
using namespace std;

void swap3(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int i = 1;
    int j = 2;
    swap3(i, j);    
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    //system("pause");
    return 0;
}

//通过交换引用，改变实参的值
//swap2有效