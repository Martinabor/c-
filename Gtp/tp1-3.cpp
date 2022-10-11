#include <iostream>
using namespace std;

int main(){
	int n1, n2;
	
	std::cout<<"Ingrese dos numeros";
	std::cin>>n1>>n2;
	
	if (n1>n2){
		std::cout<<n1;
	}
	else std::cout<<n2;


return 0;
}