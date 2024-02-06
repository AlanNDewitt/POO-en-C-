#include <iostream>


using namespace std;



int main()
{

	int N,x;
	int *puntero;
	int suma = 0;

	system("clear");

	cout<<"De que tamaño quieres el arreglo : ";
	cin>>N;

	int arreglo[N];

	puntero = arreglo;

	system("clear");

	for (int i = 1; i < N+1; ++i)
	{
		cout<<"\ningresa el dato "<<i<<": ";
		cin>>*puntero;

		puntero = arreglo + i;
		
	}

	system("clear");

	puntero = arreglo;

	cout<<"\t\testos son los datos : \n\n\n";

	for (int j = 1; j < N+1; ++j)
	{
		cout<<"\n\tArreglo en posicion "<<j<<" : "<<*puntero;

		puntero = arreglo + j;

	}

	cout<<"\n\n\n\nIngresa 1 para continuar....   ";

	cin>>x;

	system("clear");

	puntero = arreglo;

	short pares=0,impares=0;

	suma=0;

	for (int k = 1; k < N+1; ++k)
	{
		if (*puntero % 2 == 0)
		{
			cout<<"\n\t"<<*puntero<<" es Par";
			suma = suma + *puntero;
			puntero = arreglo + k;

			pares++;
			

		}

		else
		{
			cout<<"\n\t"<<*puntero<<" es Impar";
			puntero = arreglo + k;

			impares++;


		}
		
	}


	cout<<"\n\n\n\n\n";
	cout<<"  pares : "<<pares;
	cout<<"\n  impares : "<<impares;

	cout<<"\n\n\nSUMA de pares : " <<suma;



	cout<<"\n\n\n";
	
	return 0;
}





