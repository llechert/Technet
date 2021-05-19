#include <iostream>
using namespace std;
float temp[6];
float srednia, suma;

int main()
{
  cout<<"Program wylicza srednią z temperatur z 6 dni\n";
  

    for(int i=0; i<6; i++)
     { cout<<"Podaj temperature z "<<i+1<<" dnia ";
      //Dlaczego i+1? ponieważ nie mamy 0 dnia
      cin>>temp[i];
      suma = temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+ temp[5];
      srednia = suma/temp[i];
    }
  cout<<" Srednia wynosi: "<<srednia<<endl;

  return 0;
}