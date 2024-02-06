#include <iostream>
//#include <stdlib.h>
using namespace std;

class Puntos
{
private:

	int x,y;

public:

	void asigna(int a,int b)
	{
		x = a;

		y = b;
	}


	void ver()
	{
		cout<<"Componente x = "<<x;
		cout<<"\nComponente y = "<<y;
	}

	void suma(Puntos Objeto1,Puntos Objeto2)
	{
		x = Objeto1.x + Objeto2.x;
		y = Objeto1.y + Objeto2.y;
	}


};

int main()
{
	int a,b;
	Puntos punto1,punto2;

	system("clear");

	cout<<"Ingresa x : ";
	cin>>a;

	cout<<"Ingresa y : ";
	cin>>b;

	punto1.asigna(a,b);

	cout<<"\n\n\n";

	cout<<"Ingresa x : ";
	cin>>a;

	cout<<"Ingresa y : ";
	cin>>b;

	punto2.asigna(a,b);

	cout<<"\n\n\n";

	punto1.suma(punto1,punto2);  // envio los Objetos para hacer operaciones con sus Atributos

	punto1.ver();

	cout<<"\n\n\n";

	return 0;
}





