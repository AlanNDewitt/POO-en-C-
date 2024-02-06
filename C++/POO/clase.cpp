#include <iostream>
#include <stdlib.h>
using namespace std;



class articulo
{

private:
	
	int id_articulo;        //ATRIBUTOS
	float precio;

public:									//ES PUBLICO SU USO

	void asignaDatos(int contador)       //PROCESOS
	{

		id_articulo = contador;
		precio = rand()%10+11;
	
	}

	void muestraDatos(void)				//Estros procesos no necesariamente deben estar declarados en la clase pueden ser llamados
	{							// void articulo::muestraDatos{contenido}  asi declaramos la funcion fuera diciendo que es de esa funcion

		cout<<"\n\nid: "<<id_articulo;
		cout<<"\nPrecio: $"<<precio;
	}

	
};



int main()
{
	system("clear");

	articulo art[10];    //OBJETOS


	for (int i = 0; i < 10; ++i)
	{
		art[i].asignaDatos(i+1);
	    
	}

	

	cout<<"\n\n";

	for (int j = 0; j < 10; ++j)
	{
		art[j].muestraDatos();
	}

	cout<<"\n\n\n";




	
	return 0;
}




