#include <iostream>

void may ( int a , int b)
{
	if (a < b){
		std::cout << a << " "<< "es mayor que" << " " << b;
	}
	else if (a > b){
		std::cout << b << "es menor que" << a;
	}
	else std::cout<< "Son numeros iguales";
}

int main (){
	int a, b;
	std::cin>> a >> b;
	may (a , b); 
	
}