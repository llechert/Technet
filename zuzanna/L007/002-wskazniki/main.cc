#include <iostream>
using namespace std;
#define ILOSC 6

int calculateTable(int temp1[], int *temp2)
{
   temp1[0] = 21;
   temp1[1] = 21;

   temp2[0] = 21;

   return 0;
}

void calculateValue(int value1, int &value2)
{
   value1 = 21;
   value2 = 21;
}

int main()
{
  int temp1[ILOSC] = {0,1,2,3,4,5};
  int temp2[ILOSC] = {5,4,3,2,1,0};

    for(int i = 0; i < ILOSC; i++)
    {
       cout<<"Tablica temp1 element:" << temp1[i] << endl;
    }

    for(int i = 0; i < ILOSC; i++)
    {
       cout<<"Tablica temp2 element:" << temp2[i] << endl;
    }
    calculateTable(temp1, temp2);

    for(int i = 0; i < ILOSC; i++)
    {
       cout<<"Tablica temp1 element:" << temp1[i] << endl;
    }

    for(int i = 0; i < ILOSC; i++)
    {
       cout<<"Tablica temp2 element:" << temp2[i] << endl;
    }

    int value1 = 1;
    int value2 = 1;
    cout<<"Wartosc value1 wynosi :" << value1 << endl;
    cout<<"Wartosc value2 wynosi :" << value2 << endl;

    calculateValue(value1, value2);
    cout<<"Wartosc value1 wynosi :" << value1 << endl;
    cout<<"Wartosc value2 wynosi :" << value2 << endl;


  return 0;
}