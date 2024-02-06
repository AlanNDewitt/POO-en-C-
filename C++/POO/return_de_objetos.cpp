#include <iostream>
#include <math.h>
using namespace std;


class Punto
{

private:

int x,y;

public:

	void ingresa()
	{
		cout<<"\ningresa X : ";
		cin>>x;

		cout<<"\ningresa Y : ";
		cin>>y;

		system("clear");
	}

	void ver()
	{
		cout<<"("<<x<<","<<y<<")";
	}
	

	friend Punto suma(Punto P1,Punto P2)  // FUNCION AMIGA NO PERTENECE A LA CLASE SOLO LA OCUPAMOS, PUEDE IR EL CUERPO FUERA DE LA CLASE
	{
		Punto resultante;

		resultante.x = P1.x + P2.x ;
		resultante.y = P1.y + P2.y ;
	
		return resultante;			// RETORNAMOS UN OBJETO DE LA CLASE PUNTO , CON LOS METODOS Y PROPIEDADES DE LA CLASE

	}


	friend void mostrar(Punto);




	Punto suma(Punto P1,Punto P2)  // Ahora la funcion suma es miembro y no amiga
	{
		Punto resultante;

		resultante.x = P1.x + P2.x ;
		resultante.y = P1.y + P2.y ;
	
		return resultante;			// RETORNAMOS UN OBJETO DE LA CLASE PUNTO , OBVIAMENTE TIENE LOS METODOS Y PROPIEDADES DE LA CLASE

	}


};



void mostrar(Punto Psuma)						//La funcion amiga puede declararse su cuerpo fuera de la clase 
{
	cout<<"("<<Psuma.x<<","<<Psuma.y<<")";

}




int main()
{
	system("clear");

	Punto punto1,punto2,punto_suma;  //OBJETOS

	cout<<"Punto 1 \n\n";
	punto1.ingresa();

	cout<<"Punto 2 \n\n";
	punto2.ingresa();


	cout<<"\n\nPunto 1 \n";
	punto1.ver();

	cout<<"\n\nPunto 2 \n";
	punto2.ver();

	punto_suma = suma(punto1,punto2);  //El objeto retornado es igual al "punto_suma" , entonces a ese objeto le aplicamos su funcion ver()

	cout<<"\n\nPunto Suma \n";

	punto_suma.ver();


	cout<<"\n\n";

	cout<<"\n\nPunto Suma con 2 funciones amigas \n";

	mostrar(suma(punto1,punto2));    // Otra forma de ver el nuevo punto ,"mostrar" es amiga y como "suma" retorna un objeto, mostrar toma ese

	cout<<"\n\n";

	cout<<"\n\nPunto Suma con suma miembro y mostrar amiga \n";

	mostrar(punto1.suma(punto1,punto2));		//Funcion suma es miembro y retorna un objeto, ese objeto lo vemos con la amiga mostrar

	cout<<"\n\n\n";
	
	return 0;
}