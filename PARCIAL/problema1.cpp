/*[2,4,1,2,1,1,4,6,7,9,8,2]
Realizar un programa que permita:
● Cargar el conjunto de datos en un arreglo. (10 pts)
● Determinar la cantidad de datos pares e impares. (20 pts)*/


#include <iostream>
#include <math.h>

void cargar (int a[12]){
	
	for (int i=0 ; i<=11 ; i++)
		std::cin>>a[i];
	
}

void mostrar (int b[12])
{
	std::cout<<"Su arreglo ingresado es:";
	std::cout<<"["<<"  ";
	for (int i=0 ; i<=11 ; i++){
		std::cout<<b[i]<<"  ";
	}
		std::cout<<"]";
}


void impares(int c[12]){
	
	int result;
	
	int contarimpar = 0;
	
	for (int i = 0 ; i <= 11 ; i ++)
	{
		result = c[i] % 2;
		if (result == 1){
			contarimpar++;
		}
		
	}
	std::cout<<'\n';
	std::cout<<"La cantidad de numeros impares son: "<<" "<<contarimpar;
}

void pares(int d[12]){
	
	int result;
	
	int contarpar = 0;
	
	for (int i = 0 ; i <= 11 ; i ++)
	{
		result = d[i] % 2;
		if (result == 0){
			contarpar++;
		}
		
	}
	std::cout<<'\n';
	std::cout<<"La cantidad de numeros pares son: "<<"  "<<contarpar;
}

int main (){
	
	int a[12];
	
	cargar(a);
	mostrar(a);
	pares(a);
	impares(a);
}