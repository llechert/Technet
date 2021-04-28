//clang++ main.cc -std=c++11
#include <iostream>

using namespace std;

//float a,b;
double a,b;

int main()
{
  cout << "Podaj pierwsza liczbę:";
  cin >> a;
  cout << "Podaj drugą liczbe:";
  cin >> b;
  cout<<"Wynik to: "<< a + b << "." << "\n";

  return 0;
}