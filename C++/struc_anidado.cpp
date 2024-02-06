#include <iostream>
#include<stdlib.h>

using namespace std;


struct fecha
{
	short dia;
	short mes;
	short anio;

	
};


struct Datos
{
	int id;
	char nombre[20];
	float sueldoBimestral[6];

	fecha ingreso;
	
};

int main()
{
	
	Datos trabajador[10];
	int x,No_trabajor = 0;

	
  do
  {
	system("clear");



	cout<<"\n id : ";
	cin>>trabajador[No_trabajor].id;

	system("clear");

	cout<<"\n nombre : ";
	cin>>trabajador[No_trabajor].nombre;
	
	system("clear");
	
	for (int i = 0; i < 6; ++i)
	{
		//cout<<"\n sueldo del Bimestre "<< i+1 << ": $";
		//cin>>trabajador[No_trabajor].sueldoBimestral[i];
		trabajador[No_trabajor].sueldoBimestral[i] = rand() % 10001 + 10001;
	}
	
	system("clear");

	cout<<"\n dia de ingreso : ";
	cin>>trabajador[No_trabajor].ingreso.dia;

	system("clear");

	cout<<"\n mes de ingreso : ";
	cin>>trabajador[No_trabajor].ingreso.mes;

	system("clear");

	cout<<"\n año de ingreso : ";
	cin>>trabajador[No_trabajor].ingreso.anio;

	system("clear");

	cout<<"Ingresar otro trabajador ? \n\n\t\t\t SI = 1  NO = 2    : ";
	cin>>x;

	if(x == 1)
	{
		No_trabajor++;
		system("clear");
	}

	else {
		system("clear");
	}


  } while (x == 1);



  cout<<"ID\t\tNOMBRE\t\tFECHA INGRESO\t\tSUELDO BIMESTRAL ";
	

	for (int j = 0; j <= No_trabajor; ++j)
	{
		cout<<"\n\n";
		cout<<trabajador[j].id<<"\t\t "<<trabajador[j].nombre<<"\t\t "<<trabajador[j].ingreso.dia<<"/"<<trabajador[j].ingreso.mes<<"/"<<trabajador[j].ingreso.anio;
	    
	    for (int k = 0; k < 6 ; ++k)
	    {
	    	cout<<"\t\t$"<<trabajador[j].sueldoBimestral[k];
	    	cout<<"\n\t\t\t\t\t";
	    }
	    
  	cout<<"\n----------------------------------------------------------------";

	}


  cout<<"\n\n\n\n";



	
	

}





