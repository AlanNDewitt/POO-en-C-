#include <iostream>
#include <stdlib.h>
using namespace std;



class articulo
{

private:
	
	int id_articulo;        //ATRIBUTOS
	float precio;
	int cantidad = 10;

public:									//ES PUBLICO SU USO

	void asignaDatos(int contador)       //PROCESOS
	{

		id_articulo = contador;
		precio = rand()%10+11;
	
	}

	void muestraDatos(void)				//Estros procesos no necesariamente deben estar declarados en la clase pueden ser llamados
	{							// void articulo::muestraDatos{contenido}  asi declaramos la funcion fuera diciendo que es de esa funcion

		

		cout<<"\n"<<id_articulo<<"\t\t$"<<precio<<"\t\t"<<cantidad;
		
	}

	int total(short articulo,short *total)
	{
		if (articulo == id_articulo)
		{
			//*total = *total + precio;

			cantidad = cantidad - 1;

			return precio;
			
		}


		return 0;

	}

	
};






int main()
{
	system("clear");

	short articulo_compra,opcion,total=0;

	articulo art[10];    //OBJETOS



	for (int i = 0; i < 10; ++i)
	{
		art[i].asignaDatos(i+1);
	}
	

	//cout<<"\n\n";

	do
	{
		cout<<"\n\nid\t"<<"\tPrecio\t"<<"\tCantidad";

		for (int j = 0; j < 10; ++j)
		{
			art[j].muestraDatos();
		}

		cout<<"\n\n\n";

		cout<<"¿ que articulo desea comprar ?"<<"\t\ttotal a pagar : $"<<total;
		cout<<"\n\nid : ";
		cin>>articulo_compra;
		cout<<"\n\n";

		system("clear");

		cout<<"comprar otro articulo? SI = 1  NO = 2 \n\n :";
		cin>>opcion;

		for (int k = 0; k < 10; ++k)
		{
			total = total + art[k].total(articulo_compra,&total);
			
		}

		system("clear");


	} while (opcion == 1 );

	system("clear");

	cout<<"\n\nel total a pagar es : $"<<total;

	cout<<"\n\n\n";

	cout<<"PRGRAMA TERMINADO";

	


	
	return 0;
}










