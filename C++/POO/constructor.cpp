#include <iostream>
#include <math.h>
using namespace std;


class Entero
{
private:
	int a,b;

public:

	Entero(int , int); // la Declaracion del "CONSTRUCTOR" va dentro de la clase, el cuerpo tambien puede ir dentro o afuera de la clase

	Entero()		//Constructor simple inicializar los datos de todos los objetos en cero 
	{
		a=0;		//Es necesario declarar diferentes constructores que cumplan con el de llenado de objetos
		b=0;
	}

	void mostrar()
	{
		cout<<"\nA = "<<a<<"\tB = "<<b;
	}
	
	
};


Entero :: Entero(int x,int y)  //Declaramos el cuerpo del constructor fuera de la clase
{
	a = x ;

	b = y ;
}



int main()
{
	Entero objeto1(10,20); // Declaracion del objeto con constructor "IMPLICITA"

	Entero objeto2 = Entero(20,10); // Declaracion del objeto y despues asignacion del constructor "EXPLICITA"

	Entero objeto3;

	objeto1.mostrar();
	objeto2.mostrar();

	cout<<"\n\n\n";


	
	return 0;
}