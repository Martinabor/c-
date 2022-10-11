#include <iostream>
using namespace std;

int main(){
	int d1,d2,d3,d4,d5;
	int produ;
	float prom;
	
	std::cout<<"Ingrese la produccion de los dias habiles";
	std::cin>>d1>>d2>>d3>>d4>>d5;
	
	produ = d1 + d2+ d3 +d4 + d5;
	
	prom=produ / 5;
	
	if (prom > 100 and prom < 200){
		std::cout<<"El promedio de la produccion supera las 100 unidades";
	}
	else if (prom > 200 and prom < 300){
		std::cout<<"El promedio de la produccion supera las 200 unidades";
	}
	else if (prom > 300){
		std::cout<<"El promedio de la produccion supera las 300 unidades";
	}
return 0;
}