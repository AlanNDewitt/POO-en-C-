#include <iostream>


using namespace std;


struct datos
{
	char nombre[10];
	int boleta;
	float calificaciones[3];

	
};

void lectura(int cont,datos alumno[])
{

	system("clear");



	cout<<"\nIngresa el Nombre : ";
	cin>>alumno[cont].nombre;

	cout<<"\nIngresa la boleta : ";
	cin>>alumno[cont].boleta;

	for (int i = 0; i < 3; ++i)
	{
		cout<<"\nIngresa tu calificacion "<<i+1<<" :";
		cin>>alumno[cont].calificaciones[i];
	}


}

void impresion(int cont,datos alumno[])

{
	cout<<"nombre 		boleta 			calificaciones";
	cout<<"\n";

	for (int i = 0; i < cont; ++i)
	{
		cout<<alumno[i].nombre<<" 		"<<alumno[i].boleta<<" 			"<<alumno[i].calificaciones[0]<<","<<alumno[i].calificaciones[1]<<","<<alumno[i].calificaciones[2];
        cout<<"\n\n";
		
	}
}





int main(int argc, char const *argv[])
{
	datos alumno[10];
	int contador_alumno=0,opc;


	do
	{
		lectura(contador_alumno,alumno);
		contador_alumno++;

		system("clear");
		cout<<"ingresar otro alumno? NO = 1";
		cin>>opc;
		

	} while (opc !=1);

	
	system("clear");


	impresion(contador_alumno,alumno);
	

	return 0;
}




