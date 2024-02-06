#include <iostream>
#include <math.h>
using namespace std;

class Complejo
{
private:

	float a,b;

public:

	Complejo()
	{
		a = 0;
		b = 0;
	}

	Complejo(float x)
	{
		a = x;
		b = 0;

	}

	Complejo(float x , float y)
	{
		a = x;
		b = y;

	} 

	void mostrar()
	{
		cout<<a<<" + "<<b<<"i";
	}
	

	friend Complejo suma(Complejo c1, Complejo c2)
	{
		Complejo resultante;

		resultante.a = c1.a + c2.a;
		resultante.b = c1.b + c2.b;

		return resultante;
	}
};

int main()
{
	system("clear");

	Complejo A(2.7,3.5), B(1.6) , C;

	cout<<"\nA = ";
	A.mostrar();

	cout<<"\nB = ";
	B.mostrar();

	C = suma(A,B);

	cout<<"\nC = ";
	C.mostrar();

	cout<<"\n\n";


	return 0;
}