#include <iostream>

/*
int main(int argc, char ** argv) {
  int i;

  for(i=0; i< 120; ++i)
    std::cout << "Bonjour les ZZ" << 2 << std::endl;

  return 0;
}
*/

int main(int argc, char** argv){//argc 是argv所指向的字符串的数量，
                                //argc被命名为参数计数、argv被命名为参数向量，
                                //可以替换为int num_args, char** arg_strings
    std::cout<<"Have "<<argc<<"arguments:"<<std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout<<argv[i]<<std::endl;
    }
    return 0;
    
}
//输出结果将是1+参数个数
//编译g++ -o tp1 tp1.cpp
//执行./tp1 a1 b2 c3
//Have 4 arguments