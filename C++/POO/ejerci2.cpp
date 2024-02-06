#include <iostream>
#include <math.h>
using namespace std;


class Ejemplo
{
private:

	int x,y;
public:


	Ejemplo(int a,int b)
	{
		x = a;
		y = b;
	}

	Ejemplo()
	{
		x = 0;
		y = 0;
	}

	void ver()
	{
		cout<<"\n("<<x<<","<<y<<")";
	}


	Ejemplo operator+(Ejemplo P)  // Declaramos la suma para Objetos de la clase
	{
		P.x = x + P.x;
		P.y = y + P.y;

		return P;
	}


	Ejemplo operator-(Ejemplo P) // Declaramos la RESTA para Objetos de la Clase
	{
		P.x = x - P.x;
		P.y = y - P.y;

		return P;
	}

	Ejemplo operator~(Ejemplo P)
	{
		P.x = -x ;
		P.y = -y ;

		return P;
	}




	
	
};


int main()
{
	system("clear");

	Ejemplo A(3,4),B(5,2),C,D;

	A.ver();
	B.ver();

	C = A + B;

	C.ver();

	C = A - B;

	C.ver();

	D = ~C;

	D.ver();

	cout<<"\n";


	return 0;
}