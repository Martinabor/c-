// datos en 3 arreglos paralelos de tamaño 9, en el primer array esta la posicion de la fila, en el 2do la posicion de la columna 
//en el 3er el dato(numero), para completar la matriz 

#include <iostream>

void matriz (int a[9], int b[9], int d[9], int m[3][3]){
	
	for (int i = 0 ; i <= 8 ; i++){
		
		int f = a[i];
		int c = b[i];
		m [f][c] = d[i];
	}
}

void mostrar (int m [3][3]){
	
	for (int i = 0 ; i <= 2| ; i++ ){
		
		for(int j = 0 ; j <= 2 ; j++){
			std::cout<<m [i][j] << "  ";
		}
		std::cout<<" \n ";
	}
}

int main(){
	
	int m[3][3];
	int filas [9] = {0,0,0,1,1,1,2,2,2};
	int columnas[9] = {0,1,2,0,1,2,0,1,2};
	int datos[9] = {7,6,9,8,4,17,23,1,14};
	
	matriz (filas,columnas,datos,m);
	mostrar (m);
	
	return 0;
}