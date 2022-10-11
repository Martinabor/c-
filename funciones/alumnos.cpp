#include <iostream>

float prom (float n1, float n2, float n3, float &promedio, int  &aplazos){
	
	promedio = (n1 + n2 + n3)/ 3;
	
	aplazos = 0;
	
	if (n1 < 6){
		aplazos++;
	}
	if (n2 < 6){
		aplazos++;
	}		
	if (n3 < 6){
		aplazos++;
	}
	
	return 0.;
}

int main(){
	float n1,n2,n3;
	float promedio;
	int aplazos;
	
	std::cin >> n1 >> n2 >> n3 ;
	
	std::string legajo;
	std::cin>> legajo;
	
float func = prom (n1,n2,n3,promedio,aplazos);

std::cout << "El alumno " << legajo << " tiene de promedio: " << promedio << " y tiene " << aplazos << " aplazos ";

}