#include <iostream>
#include <stdlib.h>
using namespace std;


class Ejemplo
{

private:

	int numero;

	static int cuenta;         //ATRIBUTO ESTATICO va ser el mismo para todos los objetos que se declaren

public:

	void ingresa_datos(int a)
	{
		numero = a;

		cuenta++;
	}


	static void ver_cuenta()
	{
		cout<<"Cuenta : "<<cuenta<<endl;
	}

	void ver_numero()		//METODO ESTATICO este metodo va funcionar igual para todos los objetos que se declaren
	{
		

		cout<<"Numero : "<<numero<<endl;
	}

};


int Ejemplo::cuenta;  //Hay que declarar nuestros Atributos estaticos de la clase para poder usarlos    aqui es GLOBAL



int main()
{

	Ejemplo objeto;

	

	objeto.ingresa_datos(10);

	objeto.ver_cuenta();



	Ejemplo::ver_cuenta;    //ASI SE DECLARA LA FUNCION ESTATICA DONDE QUERAMOS UTILIZARLA


	
	return 0;
}