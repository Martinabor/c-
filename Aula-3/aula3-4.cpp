#include <iostream>

void may ( int a )
{
	if (a < 0){
		std::cout << a << " " " es negativo";
	}
	else if (a > 0){
		std::cout << a << " " " es positivo";
	}
	else std::cout<< a << " ""es igual a 0";
}

int main (){
	int a;
	std::cin>> a ;
	may (a );
	
}