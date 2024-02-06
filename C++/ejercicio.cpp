#include <iostream>

using namespace std;

int Tam=5;
int position=0;
int indice_eliminar;




int imprime(int arr[])
{
	//system("clear");
	cout<<"\n";
	for (int i = 0; i < position; ++i)
	{			
		cout<<"\nContenido en posicion "<<i+1<<": "<<arr[i];		
		
	}

	return 0;
}



int imprime_elim(int arr[])
{
	system("clear");
	int indice_nuevo=0;
	cout<<"\n";
	for (int i = 0; i < position; ++i)
	{
		if (arr[i] != i)
		{
			cout<<"\nContenido en "<<indice_nuevo+1<<": "<<arr[i];
			indice_nuevo++;
		}
		
	}

	return 0;
}



int elimina(int arr[])
{
	if (position >= 0)
	{
		int dato,indices=0,indice_nuevo=0;
		system("clear");
		cout<<"\n\nQue dato desea eliminar? : ";
		cin>>dato;
		system("clear");

		for (int i = 0; i < position; ++i)
		{
			if (arr[i] != dato)
			{
				//arr[i]=0;
				//indice_eliminar[indices] = i ;
				//indices++;
				cout<<"\nContenido en posicion "<<indice_nuevo+1<<": "<<arr[i];
			    indice_nuevo++;

			}
			if (arr[i] == dato)
			{
			     arr[i] = 0;
			}
		}
		//imprime_elim(arr);
		//system("clear");
	}
	
 return 0;
 }


int asigna(int arreglo[])
{
	if (position<Tam)
	{
		cout<<"\nIngresa El valor "<<position+1<<": " ;
		cin>>arreglo[position];

		position++;


	    system("clear");
   	    cout<<"Contenido : \n\n\n";
		imprime(arreglo);

	}

	

	else
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato";
		cout<<"\n\n\n";
		imprime(arreglo);
	}

	cout<<"\n\n\n";


	return arreglo[Tam];
	
}




int main()
{
	int Arreglo[Tam],opc;

	
do{

	do{
		//asigna(Arreglo);
		Arreglo[Tam] = asigna(Arreglo);

		cout<<"Agregar otro dato?   SI = 1 , NO = 2      : ";
		cin>>opc;
		system("clear");


	} while(opc==1);


	system("clear");
	cout<<"\n\nDesea borrar algun dato del Arreglo?    SI = 1 , NO = 2   : ";
	cin>>opc;
	system("clear");


	 if (opc == 1)
	 {
	 	elimina(Arreglo);
	 }	

	 cout<<"\n\n\n";
     
     cout<<"Repetir Programa ?    SI = 1 , NO = 2 :    ";
	 cin>>opc;
	 system("clear");

	 position=0;
	 indice_eliminar=0;

  } while(opc == 1);

  system("clear");

  cout<<"\n\n\n\n";
  printf("\t\t\t\tPrograma Terminado \n\n\n\n");
	 

	 return 0;

}





