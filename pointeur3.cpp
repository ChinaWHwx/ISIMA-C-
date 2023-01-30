#include <iostream>

using namespace std;

int main(int, char**) {
   const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) cout << p[i] << endl;

   // delete p;      
   // delete [] p;

   return 0;
}

//delete p会调用一次析构函数
//delete[] p会调用每个成员的析构函数
//上述两者的结果一致，delete[] p和delete p的区别在于他们对于非内部数据对象的处理不同，
//而auto实际上是一种待定数据类型，在程序中是int型，内部普通数据类型，则没有析构函数
//此时此刻无论哪种写法均不会报错


//如果数组类型是自定义类，那么new[]只能用delete[]来对应，new和delete对应；
/*

eg：class A{
    public:
    ~A(){
        cout<<"A的析构函数"<<endl;
    }
};

int main(){
    A* pA = new A[10];
    delete[] pA;//输出10次A的析构函数
  //delete pA;//会出错只析构了一次

    A* pA1 = new A;
    delete pA1;//输出一次A的析构函数
  //delete[] pA1;//编译器不会报错，但会一直调用析构函数  

    int* pInt = new int[10];
    delete[] pInt;//ok
  //delete pInt;//不会出错

    int* pInt1 = new int;
    delete pInt1;//ok
  //delete[] pInt1；//不会出错
}


*/


//但是对于普通数据类型而言，他们作用的效果是一样的，
//例如int* p=new int[10],delete p和delete[] p作用效果是一样的，原因是内部普通数据类型没有析构函数。


