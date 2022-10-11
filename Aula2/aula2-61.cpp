#include <iostream>
using namespace std;

int tabla (int n)
{
	while (n < 1) || (n > 10);
		for (int i = 1; i <= 10; i++)
			std::cout << n << " * " << i << " = " << n + i;
	
	return 0;
}

int main (){
	int n;
	
	std:: cout << "Ingrese un numero para calcular su tabla";
	std::cin>>n;
	
	int func = tabla (n);
	
	
}