#include <iostream>
using namespace std;

int main(){
	int n,i;
	long double factorial;
	
	std::cout<<"Ingrese un numero para calcular su factorial";
	std::cin>>n;
	
	factorial = 1;
	
	for (i=1;i<=n;i++)
		
		factorial = factorial * i;
	
	
	std::cout<<"Factorial de "<< n << "->" << factorial;

	return 0;
}