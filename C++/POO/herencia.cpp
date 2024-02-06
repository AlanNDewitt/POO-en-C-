#include <iostream>
#include <stdlib.h>
#include<stdlib.h>
#include <string.h>
using namespace std;


class Datos
{
private:

	string nombre;

public:

	void asigna_nombre()
	{
		cout<<"Nombre : ";
		cin>>nombre;
	}

	string valor_nombre()
	{
		return nombre;
	}
};




class Datos2 : public Datos
{
private:

	int calificaciones[3];
	float promedio = 0;

public:

	void asigna_calificaciones()
	{
		for (int i = 0; i < 3; ++i)
		{
			calificaciones[i] = rand() % 11;
		}
	}

	void ver_calificaciones()
	{
		for (int i = 0; i < 3; ++i)
		{
			//cout<<"\n\n";
			cout<<"\ncalificacion "<<i+1<<" : "<<calificaciones[i];
		}

	}

	void promedio_cal()
	{

		cout<<"Hola "<<valor_nombre();
		for (int i = 0; i < 3; ++i)
		{
			promedio = promedio + calificaciones[i];
		}

		promedio = promedio/3;

		cout<<"\ntu Promedio : "<<promedio;
	}


	
	
};


int main()
{
	system("clear");

	Datos2 objeto;

	objeto.asigna_nombre();

	cout<<"\n\n";

	objeto.asigna_calificaciones();

	objeto.ver_calificaciones();
	
	cout<<"\n\n";

	objeto.promedio_cal();

	cout<<"\n\n\n";
	return 0;
}


