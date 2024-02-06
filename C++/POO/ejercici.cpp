#include <iostream>
#include <math.h>
using namespace std;

class Ejemplo
{

private:

	int x,y,z;

public:

	void asignar_datos(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}

	void mostrar()
	{
		cout<<"X = "<<x<<"\tY = "<<y<<"\tZ= "<<z;
	}

	void operator~()
	{
		x = -x;
		y = -y;
		z = -z;
	}
	
};


int main()
{
	system("clear");

	Ejemplo S;

	S.asignar_datos(10,-20,30);

	cout<<"S = \t";
	S.mostrar();

	cout<<"\n\n";

	~S;

	cout<<"S = \t";
	S.mostrar();

	cout<<"\n\n";

	
	return 0;
}




