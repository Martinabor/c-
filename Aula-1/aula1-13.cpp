#include <iostream>
using namespace std;


int main (){

int n, uni, dec;

std::cout<<"ingrese un numero de dos cifras"; std::cin>>n;

dec = n / 10;
uni = (n - (dec * 10))/ 1;
	
	std::cout<<"Decenas"<<dec;
	std::cout<<"Unidades"<<uni;

return 0;
}