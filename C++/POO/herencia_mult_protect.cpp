#include <iostream>
#include <stdlib.h>
using namespace std;


class A 
{
protected:

	int a;

public:

	void set_a(int x)
	{
		a = x;
	}

	int get_a()
	{
		return a;
	}
};

class B 
{
protected:

	int b;

public:

	void set_b(int y)
	{
		b = y;
	}

	int get_b()
	{
		return b;
	}
};


class C : protected A, protected B
{
protected:

	int c;

public:

	int suma ()
	{

		set_a(6);
		cout<<" a = "<<get_a();

		cout<<"\n\n";

		set_b(9);
		cout<<" b = "<<get_b();

		cout<<"\n\n";

		cout<<" a + b = ";

		c = get_a() + get_b();

		return c;
	}

};


int main()
{
	system("clear");

	C objeto;

	//cout<<objeto.suma()<<" = a + b";
	cout<<objeto.suma();

	cout<<"\n\n";

	return 0;
}









