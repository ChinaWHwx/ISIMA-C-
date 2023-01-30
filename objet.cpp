#include <iostream>

class Exemple {
 public:
  void afficher() {
     std::cout << "hello" << std::endl;
  }
};

int main(int, char **) {
  
  Exemple e;
  
  e.afficher();

  return 0;
}

//C++是一种面向对象的语言，如果用gcc编译上述代码，则会报错
