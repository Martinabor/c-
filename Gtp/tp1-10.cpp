#include <iostream>


int sumanumeros (int num){
		int extNum,suma;
		suma = 0;
		
		while(num != 0) {
        extNum = num % 10;
        num /= 10;
        suma += extNum;
    }
	
	return num;
}




int main (){

int extNum, suma, num;

    
	std::cout << "Ingrese un numero entero: ";
    std::cin >> num;
   
sumanumeros (num);
	
    std::cout << "La suma de los digitos es: " << suma;



return 0;
}