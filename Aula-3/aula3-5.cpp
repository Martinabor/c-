#include <iostream>

float monto (float c , float p , float d)
{
	float mfinal = (d *(c * p)) / 100;
		 return mfinal;
}

int main (){
	float c,p,d;
	std::cin>>c; std::cin>> p; std::cin>>d;
	std::cout <<monto (c,p,d);
}