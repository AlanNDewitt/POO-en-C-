#include <iostream>

using namespace std;

int position=0;



int imprime(int arr[])
{
	int x;

	if(position>0)
	{
	
		cout<<"\n";
		for (int i = 0; i < position; ++i)
		{			
			cout<<"\nContenido en posicion "<<i+1<<": "<<arr[i];		
		
		}
	}
	
	else
	{
		cout<<"\n\n\n";
		cout<<"No hay datos aun ";

		
	}

	cout<<"\n\n\n";
	cout<<"ingresa un numero para continuar : ";
	cin>>x;

	return 0;
}



void asigna_inicio(int arreglo[])
{
	int x;

	if (position<5)
	{
		position++;

		for (int i = position-1; i > 0; --i) // RECORRE UNA POSICION ADELATNE DESDE EL ULTIMO DATO
		{
			//y=0;
			arreglo[i] = arreglo[i-1];
			
			
		}

		cout<<"\nIngresa El valor "<<1<<": " ;
		cin>>arreglo[0];

		//bposition++;

	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	else
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

} 



void asigna_despues_de(int arreglo[])
{
	int x=0,numero=0,arreglo_aux[5],o=0,dato=0;
	bool completado,seguir;

	if (position<5 && position > 0)
	{
		

		cout<<"\nDespues de que numero ingresaras el nuevo Dato \n(si se repite toma el primero): ";
		cin>>numero;

		completado = false;

		for (int i = 0; i < position; ++i)
		{
			if (arreglo[i] == numero && completado == false)
			{

				position++;


				o=0;

				for (int k = i+1; k < position; ++k)
				{
					arreglo_aux[o] = arreglo[k];
					o++;
		
				}

				o=0;

				for (int j = i+2; j < position; ++j)
				{
					arreglo[j] = arreglo_aux[o];
					o++;
					
				}

				cout<<"\n\n\ningresa el nuevo Dato : ";
			    cin>>dato;

			    arreglo[i+1] = dato;

			    completado = true;

			}
				
			
		}

      

	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	if (position == 0)
	{
		system("clear");
		cout<<"Aun no hay ningun dato ingresa primero uno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	}

} 



void asigna_antes_de(int arreglo[])
{
	int x=0,numero=0,arreglo_aux[5],o=0,dato=0;
	bool completado;

	if (position<5 && position > 0)
	{
		

		cout<<"\nAntes de que numero ingresaras el nuevo Dato \n(si se repite toma el primero): ";
		cin>>numero;

		completado = false;


		for (int i = 0; i < position; ++i)
		{
			if (arreglo[i] == numero && completado == false && i != 0)
			{

				position++;
				
				o=0;

				for (int k = i; k < position; ++k)
				{
					arreglo_aux[o] = arreglo[k];
					o++;
		
				}

				o=0;

				for (int j = i+1; j < position; ++j)
				{
					arreglo[j] = arreglo_aux[o];
					o++;
					
				}

				cout<<"\n\n\ningresa el nuevo Dato : ";
			    cin>>dato;

			    arreglo[i] = dato;

			    completado = true;

			}
				
			
		}


	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	if (position == 0)
	{
		system("clear");
		cout<<"Aun no hay ningun dato ingresa primero uno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	}

} 





void asigna(int arreglo[])
{
	int x;

	
	if (position<5)
	{
		cout<<"\nIngresa El valor "<<position+1<<": " ;
		cin>>arreglo[position];

		position++;

	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}

	

	else
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}



	//return 0;
	
}


void elimina_inicio(int arreglo[])
{
	int x=0,numero=0,arreglo_aux[5],o=0,dato=0;
	bool completado;

	if (position<5 && position > 0)
	{
		

		for (int k = 0; k < position; ++k)
				{
					  arreglo[k] = arreglo[k+1];
			     	  
				}

				position--;


	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	if (position == 0)
	{
		system("clear");
		cout<<"Aun no hay ningun dato ingresa primero uno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	}

} 



void elimina_final(int arreglo[])
{
	int x=0,numero=0,arreglo_aux[5],o=0,dato=0;
	bool completado;

	if (position<5 && position > 0)
	{
		

		arreglo[position]=0;

		position--;



	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Exitosa , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	if (position == 0)
	{
		system("clear");
		cout<<"Aun no hay ningun dato ingresa primero uno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	}

} 





void elimina_despues_de(int arreglo[])
{
	int x=0,numero=0,arreglo_aux[5],o=0,dato=0;
	bool completado,seguir;

	if (position<5 && position > 0)
	{
		

		cout<<"\nDespues de que numero quieres Eliminar  \n(si se repite toma el primero): ";
		cin>>numero;

		completado = false;

		for (int i = 0; i < position; ++i)
		{
			if (arreglo[i] == numero && completado == false && i != position-1)
			{

				//position++;


				

				for (int k = i+1; k < position; ++k)
				{
					arreglo[k] = arreglo[k+1];
		
				}

				

				position--;

			    completado = true;

			}
				
			
		}

      

	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Terminada , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	if (position == 0)
	{
		system("clear");
		cout<<"Aun no hay ningun dato ingresa primero uno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	}

} 






void elimina_antes_de(int arreglo[])
{
	int x=0,numero=0,dato=0;
	bool completado,seguir;

	if (position<5 && position > 1)
	{
		

		cout<<"\nAntes de que numero quieres Eliminar  \n(si se repite toma el primero): ";
		cin>>numero;

		completado = false;

		for (int i = 0; i < position; ++i)
		{
			if (arreglo[i] == numero && completado == false && i != 0)
			{

				//position++;


				for (int k = i-1; k < position; ++k)
				{
					arreglo[k] = arreglo[k+1];
		
				}

				

				position--;

			    completado = true;

			}
				
			
		}

      

	    system("clear");

	    cout<<"\n\n\n";
		cout<<"Operacion Terminada , ingresa un numero para continuar : ";
		cin>>x;
   	    

	}
	

	if (position == 5)
	{
		system("clear");
		cout<<"Ya no puede meter otro Dato, Arreglo lleno";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
		
	}

	/*if (position == 1)
	{
		system("clear");
		cout<<"Solo hay un dato Ingresa otro \npara poder realizar la Operacion";
		cout<<"\n\n\n";
		
		cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	} */

} 










void elimina(int arr[])
{
	int x;
	if (position > 0)
	{
		int dato,indices=0,indice_nuevo=0;
		system("clear");
		cout<<"\n\nQue dato desea eliminar? : ";
		cin>>dato;
		system("clear");

		for (int i = 0; i < 5; ++i)
		{
			
			if (arr[i] == dato)
			{
				for (int k = i; k < position; ++k)
				{
					  arr[k] = arr[k+1];
			     	  
				}

				position--;
			    
			}
		}
		
	}

	else 
	{
		cout<<"\n\n\n";
		cout<<"No hay datos aun ";
		
	}
	
	    cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	
 
 }

 
int sustituir(int arr[])
{
	int x;
	if (position > 0)
	{
		int dato,dato_nuevo,pos;
		system("clear");
		cout<<"\n\nQue Dato deseas sustituir  : ";
		cin>>dato;




		

		for (int i = 0; i < position; ++i)
		{
			
			if (arr[i] == dato)
			{
			     cout<<"\n\ndato nuevo : ";
				 cin>>dato_nuevo;

				 arr[i] = dato_nuevo;
				 system("clear");
			     
			      
			}
		}
		//imprime_elim(arr);
		//system("clear");
	}

	else 
	{
		cout<<"\n\n\n";
		cout<<"No hay datos aun ";
		
	}
	    cout<<"\n\n\n";
		cout<<"ingresa un numero para continuar : ";
		cin>>x;
	
 return 0;
 }






void menu(int arreglo[],int *opc)
{
	system("clear");

	//int Position=0;


	cout<<"\t\t\tOperaciones : \n";
	cout<<"\n\t\t\t1.-Insertar Al Final\n";
	cout<<"\n\t\t\t2.-Insertar Al Inicio\n";  
	cout<<"\n\t\t\t3.-Insertar Despues de\n";
	cout<<"\n\t\t\t4.-Insertar Antes de\n";
	cout<<"\n\t\t\t5.-Sustituir un Dato\n";
	cout<<"\n\t\t\t6.-Eliminar al Inicio\n"; 
	cout<<"\n\t\t\t7.-Eliminar al Final\n";
	cout<<"\n\t\t\t8.-Eliminar Despues de\n";
	cout<<"\n\t\t\t9.-Eliminar Antes de\n";
	cout<<"\n\t\t\t10.-Eliminar Numero X\n";
	cout<<"\n\t\t\t11.-Mostrar Contenido\n";
	cout<<"\n\t\t\t12.-Terminar Programa\n";
	cout<<"\n\n : ";
	cin>>*opc;


	switch(*opc)
	{
		case 1 : system("clear");
				 asigna(arreglo);
				 					break;
		case 2 : system("clear");
				 asigna_inicio(arreglo);
				 					break;
		case 3 : system("clear");
				 asigna_despues_de(arreglo);
				 					break;
		case 4 : system("clear");
				 asigna_antes_de(arreglo);
				 					break;
		case 5 : system("clear");
				 sustituir(arreglo);
				 					break;
		case 6 : system("clear");
				 elimina_inicio(arreglo); 
				 					break;
		case 7 : system("clear");
				 elimina_final(arreglo); 
				 					break;
		case 8 : system("clear");
				 elimina_despues_de(arreglo); 
				 					break;
		case 9 : system("clear");
				 elimina_antes_de(arreglo); 
				 					break;
		case 10 : system("clear");
				 elimina(arreglo);
				 					break;
		case 11 : system("clear");
				 imprime(arreglo);
				 					break;
	}




}


int main()
{
	int Tam=5;
	int Arreglo[Tam],Opc=0;

	do
	{
	   menu(Arreglo,&Opc);

	} while (Opc !=12);

	system("clear");

	printf("\n\n\n\n\t\t\t Programa Terminado \n\n\n\n");

	return 0;
}







