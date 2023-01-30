#include<iostream>

void fonction1(int a) {
  std::cout << &a << std::endl;
}

void fonction2(int& a) {
  std::cout << &a << std::endl;
}

int main(int, char **) {
  int age = 45;

  std::cout << &age << std::endl;
  fonction1(age);
  fonction2(age);

  return 0;
}

/*
0x7ffc8b2ba0d4
0x7ffc8b2ba0ac
0x7ffc8b2ba0d4
*/

//如果使用相同的函数名会导致调用重载函数不明确的error