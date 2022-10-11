//Realizar un programa que simule un juego de dados con las siguientes reglas:
//El jugador tira dos dados. Cada dato tiene seis caras. Las caras contienen 1, 2, 3, 4, 5 y 6
// puntos.
#include <iostream>

int dado (int num1, int num2){
	int suma;
	srand(time(0));
	
	num1 = rand() %6 + 1;
	std::cout<<num1<<"\n";
	
	num2 = rand() %6 + 1;
	std::cout<<num2<<"\n";

suma = num1 + num2;
std::cout<<"La suma es: "<<suma<<"\n";

if (suma == 7 || suma == 11){
	std::cout<<"Usted gano y termino el  juego";
}
if (suma == 2 || suma == 3 || suma == 12){
	std::cout <<"Usted perdio y termino el juego";
}	
while(suma == 4 || suma == 5 || suma == 6 || suma == 8 || suma == 9 || suma == 10  ){
	
	num1 = rand() %6 + 1;
	std::cout<<num1<<"\n";
	
	num2 = rand() %6 + 1;
	std::cout<<num2<<"\n";

suma = num1 + num2;
std::cout<<"La suma es: "<<suma<<"\n";

if (suma == 7 || suma == 11){
	std::cout<<"Usted gano y termino el  juego";
}
if (suma == 2 || suma == 3 || suma == 12){
	std::cout <<"Usted perdio y termino el juego";
}	
}

	return suma;
}




int main(){
	
	int num1,num2;
	
	dado(num1,num2);
	
	
	
	return 0;
}