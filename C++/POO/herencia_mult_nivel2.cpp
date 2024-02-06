#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <gotoxy.h>
using namespace std;


class Alumno
{
protected:

	int num_lista;

	string Nombre;

public:

	void asigna_num_lista()
	{
		cout<<"\nIngresa numero de lista :";
		cin>>num_lista;
	}

	int obtener_num_lista()
	{
		return num_lista;
	}

	void asigna_nombre()
	{
		cout<<"\nIngresa Nombre : ";
		cin>>Nombre;
	}

	string obtener_nombre()
	{
		return Nombre;
	}
};



class Parciales : public Alumno
{
protected:

	float calificacion1;
	float calificacion2;

public:

	void asigna_calificaciones()
	{
		cout<<"\nIngresa primera calificacion : ";
		cin>>calificacion1;
		cout<<"\nIngresa segunda calificacion : ";
		cin>>calificacion2;

	}

	void ver_calificaciones()
	{
		cout<<"\nCalificacion 1 : "<<calificacion1;
		cout<<"\nCalificacion 2 : "<<calificacion2;
	}

	float obtener_calificacion1()
	{
		return calificacion1;
	}

	float obtener_calificacion2()
	{
		return calificacion2;
	}
};



class Deporte 
{
private:

	float calificacion_deporte;
	string nombre_del_Deporte;

public:

	void asigna_deporte()
	{
		cout<<"\nIngresa deporte : ";
		cin>>nombre_del_Deporte;
		cout<<"\nIngresa calificacion del deporte : ";
		cin>>calificacion_deporte;
	}

	float obtener_calificacion_deporte()
	{
		return calificacion_deporte;
	}

	string obtener_deporte()
	{
		return nombre_del_Deporte;
	}

};



class Final : public Parciales, private Deporte
{
private:

	float promedio;

public:

	float obtener_promedio()
	{
		promedio = (calificacion1 + calificacion2) / 2 ;

		return promedio;
	}

	float obtener_promedio_final()
	{
		if (promedio > 8)
		{
			promedio = (calificacion1 + calificacion2 + obtener_calificacion_deporte() ) / 3 ;
		}

		return promedio;
	}

	void Si_deporte()
	{
		asigna_deporte();
	}

	string deporte_mostrar()
	{
		return obtener_deporte();
	}


};





int main()
{

	system("clear");

	short alumnos,opc,posicion,x,y=2;
	float max_prom=0;
	string name;
	bool encontrado = false;

	cout<<"cuantos alumnos vas a ingresar : ";
	cin>>alumnos;

	Final objeto[alumnos];

	system("clear");

	for (int i = 0; i < alumnos; ++i)
	{
		cout<<"Alumno "<<i+1<<"\n\n";
		objeto[i].asigna_nombre();
		objeto[i].asigna_num_lista();
		objeto[i].asigna_calificaciones();

		if (objeto[i].obtener_promedio() > 8.0)
		{
			cout<<"\n*** Puedes ingresar un deporte ***\n\n";
			objeto[i].Si_deporte();
		}
		system("clear");
	}



  do{

	system("clear");

	cout<<"Opciones : ";
	cout<<"\n\t\t1.-Buscar por nombre\n";
	cout<<"\n\t\t2.-Mayor promedio\n";
	cout<<"\n\t\t3.-quien reprobo 1 o 2\n";
	cout<<"\n\t\t4.Mostrar todo \n";
	cout<<"\n\t\t5.-Salir \n\n";
	cin>>opc;

	system("clear");

	switch (opc)
	{
		case 1 : 

			cout<<"ingresa el nombre a Buscar : ";
			cin>>name;

			cout<<"Nombre\t    Num_lista\tCalificaciones\t    Promedio \t  Deporte";
			//cout<<"\n\n";

			for (int j = 0; j < alumnos; ++j)
			{
				if (objeto[j].obtener_nombre() == name)
				 {
				 	encontrado = true;
				 	//cout<<"Se encontro : "<<objeto[j].obtener_nombre();
					
					gotoxy(0,4);
				 	cout<<objeto[j].obtener_nombre();

				 	gotoxy(16,4);
				 	cout<<objeto[j].obtener_num_lista();

				 	gotoxy(24,4);
				 	cout<<"cal1["<<objeto[j].obtener_calificacion1()<<"]";

				 	gotoxy(34,4);
				 	cout<<"cal2["<<objeto[j].obtener_calificacion2()<<"]";

				 	gotoxy(46,4);
				 	cout<<objeto[j].obtener_promedio_final();

				 	gotoxy(60,y);
				 	cout<<objeto[j].deporte_mostrar();

				 	cout<<"\n---------------------------------------------------------------------\n";
				 } 
			}

			if (encontrado == false)
			{
				cout<<"\n\t NO SE ENCONTRO COINCIDENCIA";
			}

			cout<<"\n\n\nIngresa 1 para continuar.. ";
			cin>>x;

		break;

		
		case 2 :

			for (int k = 0; k < alumnos; ++k)
			{
				if (objeto[k].obtener_promedio() > max_prom)
				{
					max_prom = objeto[k].obtener_promedio_final();
					posicion = k;
				}
			}

			cout<<"\nEl mayor promedio es : "<<max_prom;
			cout<<"\nde el Alumno : "<<objeto[posicion].obtener_nombre();


			cout<<"\n\n\nIngresa 1 para continuar.. ";
			cin>>x;

		break;


		case 3 :

			for (int w = 0; w < alumnos; ++w)
			{
				if (objeto[w].obtener_calificacion1() < 6 && objeto[w].obtener_calificacion2() < 6)
				{
					cout<<"\nEl alumno : "<<objeto[w].obtener_nombre();
					cout<<"\nReprobo 2 materias";
				}

				if (objeto[w].obtener_calificacion1() < 6 && objeto[w].obtener_calificacion2() > 6)
				{
					cout<<"\nEl alumno : "<<objeto[w].obtener_nombre();
					cout<<"\nReprobo 1 materia";
				}

				if (objeto[w].obtener_calificacion1() > 6 && objeto[w].obtener_calificacion2() < 6)
				{
					cout<<"\nEl alumno : "<<objeto[w].obtener_nombre();
					cout<<"\nReprobo 1 materia";
				}

				cout<<"\n\n";
			}

			cout<<"\n\n\nIngresa 1 para continuar.. ";
			cin>>x;

		break;


		case 4 :

				//gotoxy(0,0);
				cout<<"Nombre\t    Num_lista\tCalificaciones\t    Promedio \t  Deporte";
				//cout<<"\n\n";

				y = 2;

				for (int i = 0; i < alumnos; ++i)
				{
					/*
					cout<<objeto[i].obtener_nombre()<<"\t"<<objeto[i].obtener_num_lista()<<"\t\tcal1["<<objeto[i].obtener_calificacion1()<<"] cal2["
					<<objeto[i].obtener_calificacion2()<<"]\t"<<objeto[i].obtener_promedio();

					cout<<"\n---------------------------------------------------------------------\n";
e
					*/

					gotoxy(0,y);
				 	cout<<objeto[i].obtener_nombre();

				 	gotoxy(16,y);
				 	cout<<objeto[i].obtener_num_lista();

				 	gotoxy(24,y);
				 	cout<<"cal1["<<objeto[i].obtener_calificacion1()<<"]";

				 	gotoxy(34,y);
				 	cout<<"cal2["<<objeto[i].obtener_calificacion2()<<"]";

				 	gotoxy(48,y);
				 	cout<<objeto[i].obtener_promedio_final();

				 	gotoxy(60,y);
				 	cout<<objeto[i].deporte_mostrar();




				 	cout<<"\n---------------------------------------------------------------------\n";

				 	y = y + 2;
				}

				cout<<"\n\n\nIngresa 1 para continuar.. ";
				cin>>x;

		break;


	}


  }while(opc != 5);



	return 0;
}





