//p12
/*Se cuenta con el siguiente conjuntos de datos:
[1,1,1,0,0,1,0,0,1,0,0,1]
Realizar un programa que permita:
Cargar el conjunto de datos en un arreglo. (10 pts)
Determinar cual valor aparece mas cantidad de veces. (20 pts)*/

#include <iostream>

void cargar(int a[]){
	int  val1 = 0 , val0 = 0;
	
	for (int i = 0 ; i <= 11 ; i ++){
		
		if (a[i] == 1){
			val1 = val1 + 1;
		}
		if (a[i] == 0){
			val0 = val0 + 1;
		}
	}
	
	std::cout<<"LA cantidad de 1 en el arreglo son: "<<"  "<<val1<< '\n' ;
	std::cout<<"La cantidad de 0 en el arreglo son: "<<"  "<<val0<< '\n';
}

int main (){
	
	int a[12] = (1;1;1;0;0;1;0;0;1;0;0;1);
	int val1,val0;
	
	cargar(a);
	
	return 0;
	
}
