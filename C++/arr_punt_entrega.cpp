#include <iostream>
#include <stdlib.h>

using namespace std;


void Insertar_antes_primer_impar(int arreglo[],int *N)
{
	int *punter,*punter2,dato,x;
	bool operacion = false;

	punter = arreglo;

	system("clear");

	cout<<"\n\n\t\tIngrese el dato : ";
	cin>>dato;

	for (int i = 1 ; i < 11 + *N; ++i)
	{
		if (*punter % 2 != 0 && operacion == false)
		{
		
			punter = punter + 10 + *N ;  // puntero en la posicion del ultimo valor

			for (int j = 1; j < (11 + *N + 1); ++j)
			{
				punter2 = punter + 1; // Puntero2 va ser igual a la ultima posicion mas 1 

				*punter2 = *punter ; // Puntero en ultima posicion mas 1, es igual a puntero en la ultima p

										// esto es para recorrer desde el ultimo valor uno para adelante 

				punter = punter -1;      // voy retrocediendo el puntero principal.
				//punter2 = punter -1;
				
			}

			punter = arreglo + (i - 1);

			*punter = dato; 

			*N = x;
			x = x + 1;    // ESTA PARTE NO SE COMO HACER QUE AUMENTE N PARA QUE AL IMPRIMIR IMPRIMA UNO MAS.
			*N = x ;

			operacion = true;



			
		}

		
		punter = arreglo + i;
		
	}


}



void Mostrar_Arreglo(int arreglo[], int N)
{
	int *punter;
	short x;

	punter = arreglo;

	system("clear");

	for (int j = 1; j < 11 + N ; ++j)
	{
		cout<<"\n\tArreglo en posicion "<<j<<" : "<<*punter;

		punter = arreglo + j;

	}

	cout<<"\n\n\n\n\t\t\tIngrese 1 para continuar ... 	: ";
	cin>>x;


}


void menu(short *o, int Arr[])
{

	int ingresos=0;

	system("clear");
	cout<<"\n\n\n\t\t\t\t Operaciones \n\n";
	cout<<"\t\t\t1.-Insertar antes del primer Impar\n\n";
	cout<<"\t\t\t2.-Eliminar despues del primer Impar\n\n";
	cout<<"\t\t\t3.-Mostrar Arreglo \n\n";
	cout<<"\t\t\t4.-Salir \n\n\t\t\t";
	//cout<<"\n\n\n"<<ingresos<<"\n\n\n\n\t\t\t";
	cin>>*o;

	//bproductos = productos;

	switch (*o)
	{
		case 1 :

		Insertar_antes_primer_impar(Arr,&ingresos);	

								break;
		case 2 :

		
						
								break;
	    case 3 :

	    		Mostrar_Arreglo(Arr,ingresos);


	    						break;
	
	}

}



int main()
{
	system("clear");

	int Arreglo[30];
	int *puntero;
	short opcion;

	puntero = Arreglo;


	for (int i = 1; i < 11; ++i)
	{
		*puntero = rand()% 10 + 0;
		
		puntero = Arreglo + i;
		
	}

	do
	{
		menu(&opcion,Arreglo);
		
	} while (opcion !=4);




	system("clear");

	cout<<"\n\n\n\n\n\t\t\t\tPROGRAMA TERMINADO\n\n\n\n\n\n\n";



	
	return 0;
}





