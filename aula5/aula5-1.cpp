//Cargar un arreglo con 10 números enteros.
//Recorrer el arreglo y determinar cuántos números ingresados son menores a 5.
 
 #include <iostream>
 
 void numeros (int a[10]){
	 
	 int contador;
	 
	 for (int i = 0 ; i <= 9; i++)
	 {
	 if (a[i] < 5)
	 {
		contador++;
	 }
	 }
	 std::cout<<"Los numeros mayores a 5 son :"<<contador;
	 
 }
 
 
 int main(){
	 
 int a[10];
	
	for (int i = 0 ; i <= 9 ; i++){
		std::cin>> a[i];
 }
 
 numeros (a);
 
 return 0;
 }