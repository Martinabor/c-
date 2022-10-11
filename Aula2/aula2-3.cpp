#include <iostream>

int main (){

int a, b,sig,sum;

std::cin>>a;
std::cin>>b;


if (a < 0){
	a = a * (-1);  
}
if (b < 0){
	b = b * (-1);
}

sum = a + b;

std::cout<<sum;


	
}