#include <iostream>

using namespace std;

int calculate(int param)
{
   if (param > 0) 
   {
     cout<<"Parametr:" << param << endl;
     return param + calculate(param - 1);
   }
   return 0;
}

void write(int param)
{
   cout<<"Parametr:" << param << endl;
   if (param > 0)
       write(param - 1);
}

int main()
{
  cout<<"Program demonstrujacy rekurencje" << endl;
  
  int sum = calculate(5);
    
  cout<<"Wynik, suma wynosi: "<< sum << endl;

  write(5);

  cout <<"Koniec programu." << endl;

  return 0;
}