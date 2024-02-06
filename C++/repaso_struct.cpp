#include <iostream>

using namespace std;


struct datos
{
	int edad;
	char nombre[10];
	char ciudad[10];


	
};


int main()
{
	datos d1;

	cout<<" \n Ingresa la tu edad : ";
	cin>>d1.edad;
	cout<<" \n Ingresa la tu nombre : ";
	cin>>d1.nombre;
	cout<<" \n Ingresa la tu ciudad : ";
	cin>>d1.ciudad;

	system("clear");

	cout<<"\n\n\n";
	cout<<"te llamas : "<<d1.nombre<< "\ntienes : "<<d1.edad <<"\nvives en :" << d1.ciudad;
	cout<<"\n\n\n";



	return 0;
}




