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


class Derivada : public Base
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
	
	
};


int main()
{
	system("clear");

	//Base objeto;
	Derivada objeto_d;



	objeto_d.Asigna(5,10);

	cout<<"\n\n";

	objeto_d.ver();

	objeto_d.multiplicacion();

	cout<<"\n\n";

	objeto_d.Ver_multiplicacion();


	cout<<"\n\n\n";



	objeto_d.Asigna(3,0);

	objeto_d.b=10;

	objeto_d.ver();

	cout<<"\n\n";

	objeto_d.multiplicacion();

	objeto_d.Ver_multiplicacion();


	cout<<"\n\n\n";





	return 0;
}





