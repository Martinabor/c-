//arreglos

#include <iostream>

int a [5];//ocupa 5 espacios.
int b;
b = 0;//ya esta asignado

a [0] = 9; //en el indice 0 a vale 9, 9 se ocupa en el primer casillero.
a [3] = 7; //lo mismo que arriba solo que ahora el casillero es el 3ero que vale 7.

//se pueden ubicar en cuaquier lado, es como una variable.

//el arreglo es una estructura donde se guardan varios datos.

//

int main (){
	
	int a [5];
	for (int i = 0 ; i <= 4 ; i ++)//si quiero q ingrese (en este caso) todos los datos.
	{
		std::cin>> a[i];
	}
	
	std::cin>>a [0]; // si quiero que ingrese un solo dato.
	
	
//proceso.
	//para mostrar todos los elementos.
	for (int i = 0 ; i <= 4 ; i ++){
		std::cout<< a[i]; 
}
//
	//mostrar la suma de todos los datos.
	int s = 0;
	for (int i = 0 ; i <= 4 ; i ++){
		s = s + a[i]; 
	}
	std::cout<<s; 
//

		//arreglos//
int a [5]; //el tamaño es 5.
//indice es entero.
//arreglo de tamaño n;

int n;
 std::cin>>n;
int a [n];
	for (int i = 0 ; i <= n - 1; i ++){
		std::cout<< a[i]; 
	}
	
	
	
//el recorrido debe ser ordenado, no importa si va de izquierda a derecha o de derecha izquierda.
// hay que respetar los limites.

//para ir de derecha a izquierda;
for (int i = n-1; i >= 0; i --); 
//