#include <iostream>

float div (float n , float d)
{	
	float resultado = n / d;
	return resultado;
}


int main(){
	float n,d;
	std::cin >> n >> d;
	std::cout<< div (n , d);
	return 0;
}