#include <iostream>
#include <cmath>

int division (int n, float m, float c, float d, float u)
{
m = trunc(n / 1000);
c = trunc((n - ( m * 1000 )) / 100);	
d = trunc((n- ( c * 100 )) / 10);
u = trunc((n - ( d * 10 )) / 1);

return n;
}

int main(){
	int n;
	float m,c,d,u;
	
std::cout<<"Ingrese un numero de 4 digitos";
std::cin>>n;


float func = division (n, m , c , d , u);

std::cout<< "Los digitos que componen el numero ingresado son:" <<std:: endl;
std::cout<< " d1 = " << m << std::endl;
std::cout<< " d2 = " << c << std::endl;
std::cout<< " d3 = " << d << std::endl;
std::cout<< " d4 = " << u << std::endl;
}