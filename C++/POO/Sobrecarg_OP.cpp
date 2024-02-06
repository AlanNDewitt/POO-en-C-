#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Vector
{

private:

	int Arreglo[4];

public:

	void asigna()
	{
		for (int i = 0; i < 4; ++i)
		{
			Arreglo[i] =  rand() % 11;
		}
	}
	

	void ver()
	{
		for (int i = 0; i < 4; ++i)
		{
			cout<<"\n";
			cout<<i+1<<" = "<<Arreglo[i];
		}
	}

	friend Vector operator +(Vector objeto, int num)
	{
		for (int i = 0; i < 4; ++i)
		{
			objeto.Arreglo[i] = objeto.Arreglo[i] + num;
		}

		return objeto;
	}


};


int main()
{
	system("clear");

	Vector Obj1,Obj2;

	Obj1.asigna();

	cout<<"Arreglo Obj 1 \n";

	Obj1.ver();

	Obj2 = Obj1 + 10;

	cout<<"\n\n";

	cout<<"Arreglo Obj 1 \n";

	Obj2.ver();


	cout<<"\n\n";
	
	return 0;
}




