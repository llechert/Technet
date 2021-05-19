#include <iostream>

using namespace std;
#define ILOSC 2

float temp[ILOSC] = {120,20};
float suma = 0.0;


int main()
{
  cout << "Program wylicza srednią z temperatur z " << ILOSC << " dni\n";
  for(int i = 0; i < ILOSC; i++)
  {  
	  cout<<"Podaj temperature z " << i + 1 << " dnia:" << endl;
      //cin >> temp[i];
      suma += temp[i];
  }
  cout<<"Srednia wynosi: "<< suma / ILOSC << endl;

  return 0;
}