#include <iostream>
//#include <stdlib.h>
using namespace std;



class B; //Declaramos esta clase aqui para que la detecte la funcion friend porque sino no la va detectar 


class A
{

private:

	int Valor1;

public:

	void Asigna(int x)
	{
		Valor1 = x;	
	}

	friend int suma(A , B);
		
};

class B
{

private:

	int Valor2;

public:

	void Asigna(int y)
	{
		Valor2 = y;	
	}

	friend int suma(A,B);
		
};



int suma(A objeto1,B objeto2)
{
	return (objeto1.Valor1 + objeto2.Valor2);
}




int main()
{
	system("clear");

	A a;  //Declaramos OBJETOS
	B b;

	int num1,num2;

	cout<<"Valor 1 :";
	cin>>num1; 

	a.Asigna(num1);

	cout<<"\nValor 2 :";
	cin>>num2;

	b.Asigna(num2);

	cout<<("\n\n");

	cout<<"la suma es : "<<suma(a,b)<<"\n\n\n";
	
	return 0;
}





