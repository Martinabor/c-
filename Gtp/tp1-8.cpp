//Desarrollar un programa en el cual introduzca un número entero positivo e invierta los dígitos
 //del número. Mostrar en pantalla el número invertido.
 
#include <iostream>
#include <cstdlib>

using namespace std;

int invertirNumero(int num)
{
 int inv=0;
	while(num>0)
	{
		inv=inv * 10 + (num % 10);
		num = num / 10;
	}
 
 return inv;
}	

int main() 
{
 int num;
	cout<<"Numero a invertir: ";
	cin>>num;
 
	cout<<"El numero invertido es: "<<invertirNumero(num)<<endl;
 
 return 0;
}

