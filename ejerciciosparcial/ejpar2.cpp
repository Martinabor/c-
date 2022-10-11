//una matriz de 3x3 con datos
//a)carga de la matriz
//b) calcular la suma de cada fila
//el resultado de la suma de cada fila tiene que ser en forma de un arreglo
//c) calcular la suma de cada columna y crear un arreglo
//d) determinar cuantos elementos del arreglo sumafilas son menores que su promedio
//e) idem para arreglo sumacolumnas

#include <iostream>



void matriz(int m [3][3]){
	
for (int fil = 0 ; fil <= 2; fil++){ 
	for (int col = 0; col <= 2; col++){ 
		std::cin>>m[fil][col]; 
		}
	}
}

void mosmatriz(int mm[3][3]){
for (int i = 0 ; i <= 2; i++){ 
	for (int j = 0; j <= 2; j++)
	{ 
	
		std::cout<<mm[i][j]<<"  ";
	}
	std::cout<<"\n";
}
}

void sumafila(int f[3]){
	
	for (int )
}


int main(){
	
	int m[3][3];
	
	
	matriz(m);
	mosmatriz(m);
	
	
	
	
	
	return 0;
}