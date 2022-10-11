#include <iostream>

int main(){

int p, a, b, h;

std::cout<<"Ingrese la base"; std::cin>>b;
while (b <= 0 ){
	std::cout<<"Ingrese un numero mayor que 0"; std::cin>>b;
}

std::cout<<"Ingrese la altura"; std::cin>>h;
while ( h <= 0 ){
	std::cout<<"Ingrese un numero mayor que 0";std::cin>>h;
}



	p = 2*b + 2*h;
	
	a = b * h;
	
std::cout<<"El perimetro es:"<<" "<<p;
std::cout<<" ";
std::cout<<"El area es:"<<" "<<a;



return 0;
}