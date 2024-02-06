#include <iostream>
#include <stdlib.h>
using namespace std;

class Empleado
{

private:


public:

	static int contador;

	char nombre[15];
	int edad;


	
	void Ingresar_empleados()
	{
		cout<<"\tNombre : ";
		cin>>nombre;
		cout<<"\n\n\tEdad : ";
		cin>>edad;

		contador++;

	}


	void Mostrar_empleados()
	{
		cout<<"\n"<<nombre<<"\t\t"<<edad;
	}


	static int contador_empleados()
	{
		return contador;
		
	}


};


int Empleado::contador=0;



int main()
{

	Empleado empleados[10];



	int opcion,cont,x;

	do
	{
		system("clear");

		cont = Empleado::contador_empleados();



		cout<<"\n\n\n";
		cout<<"\t\t\t|| OPERACIONES ||";
		cout<<"\n\n\n";
		cout<<"\t\t\t1.-Agregar Empleado\n\n";
		cout<<"\t\t\t2.-Mostrar Empleados\n\n";
		cout<<"\t\t\t3.-Salir\n\n\n\t\t\t:";

		cin>>opcion;

		system("clear");

		switch (opcion)
		{

			case 1 : 

					 empleados[cont].Ingresar_empleados();
					 system("clear");


			 							break;

			case 2 : 


					cout<<"Nombre\t\tEdad\n";

					for (int i = 0; i < cont; ++i)
					{
						//cout<<"\n"<<empleados[i].nombre<<"\t\t"<<empleados[i].edad;
						empleados[i].Mostrar_empleados();
					}

					cout<<"\n\n\ningresa 1 para continuar... :";

					cin>>x;

					 
					 system("clear");

			 							break;
		}


	

	} while (opcion != 3);


	
	return 0;
}





