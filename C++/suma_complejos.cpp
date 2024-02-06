#include <iostream>


using namespace std;

struct complejos
{
	float real;
	float imaginaria;

	
};


int main()
{
	complejos numero[2];
	int suma[2];

	system("clear");

	cout<<" \n Ingresa la parte real de tu primer numero : ";
	cin>>numero[0].real;
	cout<<" \n Ingresa la parte imaginaria de tu primer numero : ";
	cin>>numero[0].imaginaria;

	system("clear");

	cout<<" \n Ingresa la parte real de tu segundo numero : ";
	cin>>numero[1].real;
	cout<<" \n Ingresa la parte imaginaria de tu segundo numero : ";
	cin>>numero[1].imaginaria;

	system("clear");

	suma[0] = numero[0].real + numero[1].real;
	suma[1] = numero[0].imaginaria + numero[1].imaginaria;

	cout<<"La suma es igual a : "<<suma[0]<<"  +  "<<suma[1]<<"i";
	cout<<"\n\n\n";





	

	//system("clear");




	return 0;
}





