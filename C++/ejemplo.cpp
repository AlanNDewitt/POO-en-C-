#include <iostream>

using namespace std;

float Iva_de_Producto (float precio)
{
	
	precio = precio * 0.16;

	return precio;
}

int main()
{
	float monto,iva;

	cout<<"\n\nIngresa el monto : ";
	cin>>monto;

	iva = Iva_de_Producto(monto);

	cout<<"\n";
	cout<<"\nEl precio neto es : " <<monto;
	cout<<"\nEl Iva es : " <<iva;
	cout<<"\nEl Precio final es : "<<monto+iva<<"\n\n"; 
	
	return 0;
	
}




