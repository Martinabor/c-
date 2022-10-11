#include <iostream>

float ccubo (float n, float &cuadrado, float &cubo);
{
	cuadrado = n * n;
	cubo = n * n * n ;
	
	return n;
}

int main(){
	float n,cuadrado,cubo;
	std::cin>>n;
	
	float func = ccubo( n, cuadrado, cubo);
	
	std::cout<<" EL cuadrado de "<< n << " es " << cuadrado;
	std::cout<< "\n";
	std::cout << " El cubo de " << n << " es " <<cubo;
}

