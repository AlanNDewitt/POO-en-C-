#include <iostream>
//#include <stdlib.h>
using namespace std;

class Prueba
{
private:

	int a,b;

public:

	void asigna(int x,int y)
	{
		a=x;  b=y;
	}

	friend float media(Prueba A)  //Funcion amiga , es como si fuera global al programa pero la usamos en una clase.
	{
		return float(A.a + A.b) / 2;
	}

	void ver()
	{
		cout<<a<<"\t"<<b;
	}
	
};


int main()
{
	system("clear");

	Prueba objeto;
	
	int num1,num2;

	cout<<"Valor 1 :";
	cin>>num1; 

	cout<<"\nValor 2 :";
	cin>>num2; 

	objeto.asigna(num1,num2);

	//objeto.media(objeto);

	cout<<"la media es : "<<media(objeto);  // se Llama la funcion amiga como global ,

	cout<<"\n\n\n";
	
	return 0;
}





