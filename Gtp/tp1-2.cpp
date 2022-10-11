#include <iostream>
using namespace std;

int main(){
	int ent;
	
	std::cout<<"Ingrese un numero:";
	std::cin>>ent;
	
	if (ent > 0){
		std::cout<<"P";
		}
		else 
			if (ent < 0){
				std::cout<<"N";
			}
		else 
			if (ent == 0) {
				std::cout<<"C";
			}
		
return 0;
}