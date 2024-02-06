#include <iostream>
#include <stdlib.h>
using namespace std;



class Ejemplo
{

private:

	int a,b;

public:

	void lectura()
	{
		cout<<"Ingresa dato 1 :";
		cin>>a;
		cout<<"\nIngresa dato 2 :";
		cin>>b;
	}

	void mostrar()
	{
		cout<<"Valor del primer dato:  "<<a;
		cout<<"\nValor del primer dato:  "<<b;
	}

	int mayor()
	{
		if (a>b)
		{
			return a;
		}

		else
		{
			return b;

		}
	}


};



int main()
{
	int numero_mayor;

	system("clear");



	Ejemplo e;

	e.lectura();

	cout<<"\n\n\n";

	e.mostrar();

	cout<<"\n\n\n";

	numero_mayor = e.mayor();

	cout<<"El numero mayor es : "<<numero_mayor;

	cout<<"\n\n\n";


	
	return 0;
}





