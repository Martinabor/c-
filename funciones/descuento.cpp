#include <iostream>

float monto (float suel, float &jubi, float &obra, float &suelneto){
	jubi *= suel / 100;
	obra *= suel / 100;
	suelneto = (suel - jubi) - obra;
	
	return 0;
}

int main (){
	float suel, jubi , obra, suelneto;
	std::cin >> suel;

		float func = monto (suel, jubi, obra, suelneto);
		
	std::cout << " EL sueldo es : $ " << suel <<"\n";
	std::cout << " El descuento por jubilacion es: $ " << jubi << "\n";
	std::cout << " El descuento por obra social es : $ " << obra << "\n";
	std::cout << " El sueldo neto es: $ " << suelneto;
}