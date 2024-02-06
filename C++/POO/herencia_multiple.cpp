#include <iostream>
#include <stdlib.h>
using namespace std;


class A 
{
private:

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
private:

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

class C : public A, public B
{
private:

	int c;

public:

	int suma ()
	{
		c = get_a() + get_b();

		return c;
	}

};


int main()
{
	system("clear");

	C objeto;

	objeto.set_a(6);
	cout<<" a = "<<objeto.get_a();

	cout<<"\n\n";

	objeto.set_b(9);
	cout<<" b = "<<objeto.get_b();

	cout<<"\n\n";

	cout<<"a + b = "<<objeto.suma();

	cout<<"\n\n";

	return 0;
}



