#include <iostream>
#include <algorithm>
 
using namespace std;
 
void sortuj(int *tab, int n)
{
	
	for(int i=0, zamiany=1; i<n-1 && zamiany!=0; i++)
	{
		zamiany=0;
		for(int j=0; j<n-1; j++)
			if(tab[j]>tab[j+1])
			{
			swap(tab[j], tab[j+1]);
			zamiany++;	
			} 
	}
}
 
 
int main()
{
	int x;
	cout << "Podaj ile elementow chcesz posortowac: ";
	cin >> x;
	
	int *elementy=new int[x];//program wykorzystuje tablice dynamiczne
	
	cout << "Podaj elementy:" << endl;
	
	for(int i=0; i<x; i++)
	cin >> elementy[i];	
	
	cout << "Oto te elementy: " << endl;
	
	
	for(int i=0; i<x; i++)
	cout << elementy[i] << " ";
	
	
	sortuj(elementy, x);
	
	cout << "\nOto elementy po sortowaniu: " << endl;
	
	for(int i=0; i<x; i++)
	cout << elementy[i] << " ";
		
	
	delete [] elementy;
	
	system("pause");
	return 0;
}