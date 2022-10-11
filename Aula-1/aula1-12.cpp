#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	
	std::cout<<"Ingrese el primer lado"; std::cin>>a;
	std::cout<<"Ingrese el segundo lado"; std::cin>>b;
	std::cout<<"Ingrese el tercer lado"; std::cin>>c;
	
	if (a == b == c)
		std::cout<<"El triangulo es Equilatero";
	else if (a == b || a == c || b == c)
		std::cout<<"El triangulo es Isoseles";
	else 
		std::cout<<"El triangulo es Escaleno";
	
return 0;
}