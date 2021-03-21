//clang++ main.cc -std=c++11
//./a.out running

#include <iostream>

int myFirstFunction(int iloscGruszek)
{
  iloscGruszek = 40; 

  return iloscGruszek;
}

int main() 
{
  int iloscGruszek = 20;
  
  iloscGruszek = myFirstFunction(iloscGruszek);

  std::cout << iloscGruszek << "\n";

  std::cout << "Koniec programu\n";

  return 0;
}