#include <iostream>
//#include <stdlib.h>
using namespace std;

class Tiempo
{
private:

	int horas=0, minutos=0,dias=0;

public:

	void asigna(int hrs,int min)
	{
		horas = hrs;
		minutos = min; 
	}

	void ver()
	{
		cout<<"La hora es : "<<horas<<":"<<minutos;
	}

	void suma_tiempos(Tiempo time1,Tiempo time2)
	{
		horas = time1.horas + time2.horas;

		minutos = time1.minutos + time2.minutos;


		while(minutos >= 60)
		{	
			minutos = (minutos-60);
			horas = horas + 1;

		}


		while(horas >= 24)
		{	
			horas = (horas-24);
			dias = dias + 1;
		}

		

		if ( horas < 10)
		{
			if (minutos < 10)
			{
				cout<<"la hora final es : 0"<<horas<<":0"<<minutos;
			}

			else
			{
				cout<<"la hora final es : 0"<<horas<<":"<<minutos;
			}
		}

		else
		{
			if (minutos < 10)
			{
				cout<<"la hora final es : "<<horas<<":0"<<minutos;
			}

			else
			{
				cout<<"la hora final es : "<<horas<<":"<<minutos;
			}
		}

		cout<<"\n\nDias Transcurridos : "<<dias;

		 

	}

};


int main()
{
	system("clear");

	int h,m;

	Tiempo tiempo1,tiempo2,tiempo3_suma;

	cout<<"	Tiempo Base\n\n";
	cout<<"Ingresa horas : ";
	cin>>h;

	cout<<"Ingresa minutos : ";
	cin>>m;

	tiempo1.asigna(h,m);

	cout<<"\n\n\n";

	cout<<"	Tiempo a Sumar\n\n";

	cout<<"Ingresa horas : ";
	cin>>h;

	cout<<"Ingresa minutos : ";
	cin>>m;

	tiempo2.asigna(h,m);

	cout<<"\n\n\n";

	cout<<"	Suma de Tiempos \n\n";

	tiempo3_suma.suma_tiempos(tiempo1,tiempo2);

	cout<<"\n\n\n";
	
	return 0;
}





