// implementacja stosu push, pop
// 

#include<iostream>

#define OK 1
#define ERROR -1
#define MAX 10

using namespace std;

int tab[MAX], i = 0;

inline bool push(int element)
{
  if(i >= MAX) return ERROR;
  tab[i++] = element;

  return OK;
}

inline int pop()
{
  if(i == 0) return ERROR;
  --i;

  return OK; 
}

inline unsigned int size()
{
  return i;
}

int main()
{
  push(10);
  push(20);
  push(30);
  std::cout<<"Liczba elementów na stosie: " << size() << "\n";
  pop();
  std::cout<<"Liczba elementów na stosie: " << size() << "\n";
  for (int j = 0 ; j < i ; j++)
      std::cout<< tab[j] << "\n";

  return 0;
}