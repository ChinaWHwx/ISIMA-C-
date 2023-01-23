#include <iostream>
#include <string>

//int main(){si on fait pas de parametre, ça marche aussi...
int main(int, char **) {  // parametres muets
  std::string prenom;     // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour "<< prenom << std::endl;

  return 0;
}