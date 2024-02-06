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
	

	friend float distancia(Punto P1,Punto P2)
	{
		float distancia=0; 

		distancia= sqrt( pow(P2.x - P1.x, 2) + pow(P2.y - P1.y,2));

		return distancia;

	}


};


int main()
{
	system("clear");

	Punto punto1,punto2;

	cout<<"Punto 1 \n\n";
	punto1.ingresa();

	cout<<"Punto 2 \n\n";
	punto2.ingresa();


	cout<<"\n\nPunto 1 \n";
	punto1.ver();

	cout<<"\n\nPunto 2 \n";
	punto2.ver();


	cout<<"\n\nLa distancia entre los 2 puntos es : "<<distancia(punto1,punto2);



	cout<<"\n\n\n";

	
	return 0;
}




