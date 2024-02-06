#include <iostream>
#include <math.h>
using namespace std;

class Complejo
{
private:

	float a,b;

public:


	void set_complejo(float x , float y)
	{
		a = x;
		b = y;
	}

	void get_complejo()
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

	Complejo A,B,C;

	A.set_complejo(2.7,3.5);
	B.set_complejo(1.6,0);
	//C.set_complejo(0,0);





	cout<<"\nA = ";
	A.get_complejo();

	cout<<"\nB = ";
	B.get_complejo();

	C = suma(A,B);

	cout<<"\nC = ";
	C.get_complejo();

	cout<<"\n\n";


	return 0;
}





