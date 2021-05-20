#include <iostream>

// Mamy dane ceny. Program na obliczać rabat dla kazdej ceny towaru. Program dodatkowo bedzie 
// obliczal rabat calego zakupu podanych towarow

//.1 Pobranie, wpisanie danych czyli cen - Ok,

//.2 Obliczanie cen po rabacie,
//.3 Obliczanie salda zakupu po rabacie - Ok,

//.4 Wypisanie wynikow - Ok.

using namespace std;
#define ILOSC 3

float ceny[ILOSC];
float results[ILOSC];

void getInputData()
{
  cout << "Podaj dane wejsciowe" << endl;
  for(int index = 0 ; index < ILOSC ; index++) 
  {
    cout << "Podaj cenę numer " << index + 1 << ":" << endl;
    cin >> ceny[index];
  }
}

void calculateDiscount(float discount, float & result)
{
  cout << "Obliczam rabaty" << endl;
  for(int index = 0 ; index <  ILOSC ; index++) 
  {
    result += ceny[index];
    results[index] = ceny[index] - (ceny[index] * discount);
  }
  result = result - (result * discount);
}

void writeResult(float results[], float result)
{
  cout << "Prezentuje wyniki" << endl;
  cout << "Ceny po rabacie" << endl;
  for(int index = 0 ; index <  ILOSC ; index++) 
  {
    cout << results[index] << endl;
  }
  int i = 0;
  while (i < ILOSC) {
    i++;
  }
  cout << "Saldo po rabacie: " << result << endl;
}

int main()
{
  float discount = 0.5;
  float result = 0.0;

  getInputData();
  calculateDiscount(discount, result);

  writeResult(results, result);

  return 0;
}