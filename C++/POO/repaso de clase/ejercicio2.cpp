#include <iostream>
#include <stdlib.h>
using namespace std;


class Ejercicio2
{

	int a[10],b=10;

public:

	void asigna()
	{
		for (int i = 0; i < 10; ++i)
		{
			a[i] = rand()%10+11;
		}
	}

	void mostrar()
	{
		for (int j = 0; j < b; ++j)
		{
			cout<<"\nDato "<<j+1<<": "<<a[j];
		}
	}
	
	bool pideTam()
	{
		
		cout<<"Hasta que dato mostrar arreglo : ";
		cin>>b;

		if (b > 0 && b < 11)
		{
			return true;
		}

		else 
		{
			return false;
		}
	}
};

int main()
{
	system("clear");


	Ejercicio2 objeto;

	objeto.asigna();

	//objeto.mostrar();

	cout<<"\n\n\n";

	if (objeto.pideTam() == true)
	{
		objeto.mostrar();
	}

	else
	{
		cout<<"Valor invalido";
	}


	cout<<"\n\n\n";



	return 0;
}



