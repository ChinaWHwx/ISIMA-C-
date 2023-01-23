//#include <stdio.h>
#include <iostream>

using namespace std;

void afficher(int a) {
  //cout<< a <<endl;//endl 自带换行功能
  printf("%d\n", a);
}

void afficher(double a) {
  printf("%lf", a);
}

int main(int, char **) {
  afficher(1);
  afficher(2.0);

  return 0;
}

//Si le fichier est d'extension .cpp et compilé avec gcc
// ou bien si le fichier d'extension .c est compilé avec g++,
//vous n'aurez pas ces messages d'erreurs !
//https://blog.csdn.net/u011032846/article/details/49814065