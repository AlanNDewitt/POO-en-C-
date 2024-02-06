#include <iostream>

using namespace std;


int main()
{
	int arreglo[] = {10,20,30,40,50};
	int *puntero;

	puntero = arreglo;

	for (int i = 1; i < 6; ++i)
	{
		cout<<"\n";
		cout<<*puntero;
		puntero = arreglo + i;

	}

	cout<<"\n\n\n";

	for (int j = 0; j < 6; ++j)
	{
		cout<<"\n";
		cout<<puntero;
		puntero = arreglo + j;
	}


	cout<<"\n\n\n";
	
	return 0;
}





