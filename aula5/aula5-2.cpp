//Cargar un arreglo con 10 números enteros.
//Recorrer el arreglo y reemplazar los valores menores que el promedio de los
//elementos cargados, por -1.

#include <iostream>

void num (int a[10]){
	
	int s = 0;
	
	for (int i = 0 ; i <= 9; i ++)
	{
		s += a[i]; 
	}
	s = s / 10;
	std::cout<<s;

	for (int j = 0 ; j <= 9; j++)
	{
		if(a[j] < s)
		{
			a[j] = -1;
		}
	}	
	std::cout<<s;
	
	for (int k = 0 ; k <= 9; k++)
	{
		std::cout<<a[k];
	}
}

int main(){
	
	int a[10];
	
	for (int i = 0 ; i <= 9; i++)
	{
		std::cin>>a[i];
	}
	
	num (a);
	
	return 0;
}