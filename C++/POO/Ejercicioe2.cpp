#include <iostream>
#include <math.h>
using namespace std;


class B;


class A
{
private:

	float Dato1;
public:

	void ingresa()
	{
		cout<<"\ningresa Dato1 : ";
		cin>>Dato1;

		system("clear");
	}

	friend float Numero_Mayor(A,B);		//Funciones que se prestan para procesos de la clase pero no son de la clase
	friend char clase_pertenece(A,B);
	
	
};


class B
{
private:

	float Dato2;

public:

	void ingresa()
	{
		cout<<"\ningresa Dato2 : ";
		cin>>Dato2;

		system("clear");
	}

	friend float Numero_Mayor(A,B);	
	friend char clase_pertenece(A,B);
	
};


float Numero_Mayor(A objeto1,B objeto2)
{
	if (objeto1.Dato1 > objeto2.Dato2)
	{
		return objeto1.Dato1;
	}

	else 
	{
		return objeto2.Dato2;
	}

}

char clase_pertenece(A objeto1,B objeto2)
{
	char letra;

	if (objeto1.Dato1 > objeto2.Dato2)
	{
		letra = 'A';

		return letra;
	}

	else 
	{
		letra = 'B';
		return letra;
	}

}


int main()
{
	system("clear");

	A objeto1;
	B objeto2;

	float Mayor;
	char Clase_mayor;

	objeto1.ingresa();

	objeto2.ingresa();

	Clase_mayor = clase_pertenece(objeto1,objeto2);

	Mayor = Numero_Mayor(objeto1,objeto2);

	cout<<"El Numero Mayor es : "<<Mayor;
	cout<<"\n de la clase : "<<Clase_mayor;

	cout<<"\n\n\n";
	
	return 0;
}




