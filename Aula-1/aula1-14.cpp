#include <iostream>
#include <math.h>
using namespace std;

int main(){

int n, resul;

std::cout<<"Ingrese un numero";std::cin>>n;

resul = n % 2;

if (resul ==0){
	std::cout<<"Par";
}
else 
	std::cout<<"Impar";


return 0;
}