#include <iostream>
#include <stdlib.h>
using namespace std;


class Alumno
{
protected:

	int num_lista;

public:

	void asigna_num_lista(int x)
	{
		num_lista = x;
	}

	int obtener_num_lista()
	{
		return num_lista;
	}
};



class Parciales : public Alumno
{
protected:

	float calificacion1;
	float calificacion2;

public:

	void asigna_calificaciones(float x,float y)
	{
		calificacion1 = x;
		calificacion2 = y;
	}

	void ver_calificaciones()
	{
		cout<<"\nCalificacion 1 : "<<calificacion1;
		cout<<"\nCalificacion 2 : "<<calificacion2;
	}
};



class Final : public Parciales
{
private:

	float promedio;

public:

	void ver_final()
	{
		cout<<"Numero de lista : "<<obtener_num_lista();
		ver_calificaciones();

		promedio = (calificacion1 + calificacion2) / 2 ;

		cout<<"\nPromedio : "<<promedio;

	}

};


int main()
{

	system("clear");

	Final objeto;

	objeto.asigna_num_lista(25);
	objeto.asigna_calificaciones(10,8.5);

	objeto.ver_final();

	cout<<"\n\n";


	return 0;
}