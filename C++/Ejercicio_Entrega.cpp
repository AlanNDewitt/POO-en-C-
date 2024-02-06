#include <iostream>
#include <string.h>


using namespace std;


struct datos_producto
{
	char clave[20];
	char descripcion[50];
	int existencia=0;
	float precio_unitario=0;

	
};

short productos=0;

void venta_producto(datos_producto product[])
{
	int x,opcion,elementos;
	if (productos == 0)
	{
	 	system("clear");
		cout<<"\n\n\n\t\t\ttodavia no hay productos";
		cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		cin>>x;
		system("clear");
	}

	else
	{
		system("clear");
		cout<<"\n\n\n\t\t\t\t PRODUCTOS  \n\n\n";

		for (int i = 0; i < productos; ++i)
		{
			cout<<"\t\t\t"<<i+1<<".-"<<product[i].clave<<"\n";
		}

		cout<<"\n\n\tQue producto desea Ingresar Ventas \n\t:";
		cin>>opcion;

		if (opcion > 0 && opcion < productos+1)
		{
			system("clear");

			cout<<"\n\n\n\t\t\t\t"<<product[opcion-1].clave<<"\n\n";

			//cout<<"\n\n\t\tExistencias :  \n\t:";

			cout<<"\n\n\t\tCuantos elementos se Venderan \n\t:";
			cin>>elementos;


			if (elementos <= product[opcion-1].existencia)
			{
				product[opcion-1].existencia = product[opcion-1].existencia - elementos;

				system("clear");

				cout<<"\n\n\n\t\t\tOperacion Exitosa \n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		 		cin>>x;
				
			}

			else
			{
				system("clear");

				cout<<"\n\n\n\t\t\tNo se puede efectuar la venta\n\t\t\tlos elementos vendidos exeden la existencia";
				cout<<"\n\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		 		cin>>x;



			}

			
		}

		else
		{
			cout<<"\n\n\n\t\t\tERROR\n\n\n";
		  	cout<<"\n\nIngresa 1 para continuar...   ";
		  	cin>>x;

		}

	}
}

void Reabastecimiento(datos_producto product[])
{
	system("clear");

	short opcion,x,opcion2,elementos;

	cout<<"\n\n\n\t\t\t\t Reabastecimiento \n\n";
	cout<<"\t\t\t1.-Nuevo producto \n\n";
	cout<<"\t\t\t2.-Reabastecer ya existente \n\n\n\t\t\t";
	cin>>opcion;

	//*productos = products;

	switch (opcion)
	{
		case 1 : 
					system("clear");

					cout<<"PRODUCTO : "<<productos+1;
					cout<<"\n\n\n\t\t Ingresa La clave del producto (10 carcteres max) \n\n\t : ";
					cin>>product[productos].clave; 

					system("clear");

					cout<<"PRODUCTO : "<<productos+1;
					cout<<"\n\n\n\t\t Ingresa una Descripcion del producto (usa _ como espacios) \n\n\t : ";
					//fgets(product[productos].descripcion,25,stdin);
					cin>>product[productos].descripcion; 				// en Linux no existe gets como tal, solo fgets

					system("clear");

					cout<<"PRODUCTO : "<<productos+1;
				    cout<<"\n\n\n\t\t Ingresa La existencia incial del producto \n\n\t  :";
					cin>>product[productos].existencia;

					system("clear");

					cout<<"PRODUCTO : "<<productos+1;
					cout<<"\n\n\n\t\t Ingresa el precio unitario del producto \n\n\t  : $";
					cin>>product[productos].precio_unitario;



					productos++;

					//*productos = products; 


																		break;

		case 2: 

		 		    if (productos == 0)
		 		    {
		 		    	system("clear");
		 		    	cout<<"\n\n\n\t\t\ttodavia no hay productos";
		 		    	cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		 		    	cin>>x;
		 		    	system("clear");
		 		    }

		 		    else
		 		    {
		 		    	system("clear");
		 		    	cout<<"\n\n\n\t\t\t\t PRODUCTOS  \n\n\n";

						for (int i = 0; i < productos; ++i)
						{
							cout<<"\t\t\t"<<i+1<<".-"<<product[i].clave<<"\n";
						}

						cout<<"\n\n\tQue producto desea Reabastecer \n\t:";
						cin>>opcion2;

						if (opcion2 > 0 && opcion2 < productos+1)
						{
							system("clear");

							cout<<"\n\n\n\t\t\t\t"<<product[opcion2-1].clave<<"\n\n";

							cout<<"\n\n\t\tCuantos elementos -Nuevos desea agregar \n\t:";
							cin>>elementos;

							product[opcion2-1].existencia = product[opcion2-1].existencia + elementos;

							system("clear");

							cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		 		    		cin>>x;
		 		    		system("clear");
						}

						else
						{
							cout<<"\n\n\n\t\t\tERROR\n\n\n";
		  					cout<<"\n\nIngresa 1 para continuar...   ";
		  					cin>>x;

						}

		 		    }
		 		    												break;

		 default : cout<<"\n\n\n\t\t\tERROR\n\n\n";
		  		   cout<<"\n\nIngresa 1 para continuar...   ";
		  		   cin>>x;



	}



}




void Actualizar_precio(datos_producto product[])
{
	system("clear");
	short opcion,x,precio_nuevo;

	if (productos == 0)
	{
	 	system("clear");
		cout<<"\n\n\n\t\t\ttodavia no hay productos";
		cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		cin>>x;
		system("clear");
	}

	else
	{
		system("clear");
		cout<<"\n\n\n\t\t\t\t PRODUCTOS  \n\n\n";

		for (int i = 0; i < productos; ++i)
		{
			cout<<"\t\t\t"<<i+1<<".-"<<product[i].clave<<"\n";
		}

		cout<<"\n\n\tQue producto desea Actualizarle el precio \n\t"; //FALTA UN IF POR SU INGRESA OTRA OPCION NO VALIDA
		cin>>opcion;

		if (opcion  > 0 && opcion < productos+1)
		{
			system("clear");

			cout<<"\n\n\n\t\t\t\t"<<product[opcion-1].clave<<"\n\n";

			cout<<"\n\n\t\n Precio Nuevo \n\t: $";
			cin>>precio_nuevo;

			if (precio_nuevo > 0)
			{
				product[opcion-1].precio_unitario = precio_nuevo;

		  	  	system("clear");

		  	 	cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		   		cin>>x;
			}

			else
			{
				cout<<"\n\n\n\t\t\tERROR\n\n\n";
		    	cout<<"\n\nIngresa 1 para continuar...   ";
		    	cin>>x;

			}
		}

		else
		{
			cout<<"\n\n\n\t\t\tERROR\n\n\n";
		    cout<<"\n\nIngresa 1 para continuar...   ";
		    cin>>x;

		}


		

	}

}






void Informacion_producto(datos_producto product[])
{
	system("clear");
	short opcion,x;

	if (productos == 0)
	{
	 	system("clear");
		cout<<"\n\n\n\t\t\ttodavia no hay productos";
		cout<<"\n\n\n\t\t\tingresa 1 para continuar ... \n\n\t\t";
		cin>>x;
		system("clear");
	}


	else
	{
		cout<<"\n\n\n\t\t\t\t PRODUCTOS  \n\n\n";

		for (int i = 0; i < productos; ++i)
		{
			cout<<"\t\t\t"<<i+1<<".-"<<product[i].clave<<"\n";
		}

		cout<<"\n\n\tQue producto desea conocer su Informacion \n\t:";
		cin>>opcion;

		system("clear");

		if (opcion > 0 && opcion < productos+1)
		{
			cout<<"\n\n\n\t\t\tPRODUCTO : "<<product[opcion-1].clave;
			cout<<"\n\n\t\t\tDescripcion : "<<product[opcion-1].descripcion;
			cout<<"\n\n\t\t\tExistencia : "<<product[opcion-1].existencia;
			cout<<"\n\n\t\t\tPRECIO por pz : $"<<product[opcion-1].precio_unitario;

			cout<<"\n\n\n\nIngresa 1 para continuar...   ";
			cin>>x;
		}

	

		else
		{

		cout<<"\n\n\n\t\t\tERROR\n\n\n";
		cout<<"\n\nIngresa 1 para continuar...   ";
		cin>>x;
			
			}

    }
}





void menu(int *o, datos_producto product[])
{
	//int productos;

	system("clear");
	cout<<"\n\n\n\t\t\t\t Inventario \n\n";
	cout<<"\t\t\t1.-Venta de producto \n\n";
	cout<<"\t\t\t2.-Reabastecimiento \n\n";
	cout<<"\t\t\t3.-Actualizar Precio \n\n";
	cout<<"\t\t\t4.-Informacion de un producto \n\n";
	cout<<"\t\t\t5.-Salir \n\n\t\t\t";
	//cout<<"\n\n\n"<<productos<<"\n\n";
	cin>>*o;

	//bproductos = productos;

	switch (*o)
	{
		case 1 :

		venta_producto(product);

								break;
		case 2 :

		Reabastecimiento(product);
						
								break;
	    case 3 :

		Actualizar_precio(product);				
								break;
		case 4 :

		Informacion_producto(product);
						
								break;
	
	}

	

}


int main()
{
	//int productos = 0;
	int opc;

	datos_producto producto[15];
	

	do
	{
		//producto[productos];

		menu(&opc,producto);

	} while (opc != 5);

	system("clear");


	
	return 0;
}