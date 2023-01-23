#include <iostream>

int main() {

  char s[10];// /usr/bin/ld: tp6: _ZSt3cin: invalid version 2 (max 0)
             // /usr/bin/ld: tp6: error adding symbols: bad value 
             // collect2: error: ld returned 1 exit status
  // std::string s;
  // char *      s;

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

  return 0;
}
