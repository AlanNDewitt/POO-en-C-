#include <iostream>
#include <stdlib.h>
using namespace std;

class Base
{

private :

	int a;

public:
	
	int b;

	void Asigna(int x , int y)
	{
		a = x;
		b = y;
	}

	int valor_a()
	{
		return a;
	}

	void ver()
	{
		cout<<"A = "<<a<<"\tB = "<<b;
	}
	
};


class Derivada : private Base
{

private:

	int c;

public:

	void multiplicacion()
	{
		c = b * valor_a();

	}

	void Ver_multiplicacion()
	{
		//cout<<"A = "<<valor_a()<<"\tB = "<<b;

		cout<<"\n multiplicacion : "<<c;
	}


	void Asignar_datos(int n,int m)
	{
		Asigna(n,m);
	}

	void visualizar()
	{
		ver();
	}
	
	
};



int main()
{
	system("clear");

	Derivada objeto;

	objeto.Asignar_datos(10,3);

	objeto.visualizar();

	cout<<"\n\n";

	objeto.multiplicacion();

	objeto.Ver_multiplicacion();

	cout<<"\n\n\n";







	
	return 0;
}





