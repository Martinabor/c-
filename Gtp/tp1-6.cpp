//Dada una medida de tiempo expresada en horas, minutos y segundos con valores arbitrarios,
//obtenga un programa que transforme dicha medida en una expresión correcta. Por ejemplo,
//dada la medida 3h 118m 195s, el programa deberá obtener como resultado 5h 1m 15s
#include <iostream>

void mejor (int horas, int minutos, int segundos){
	
		while (segundos > 60)
		{
			segundos = segundos - 60;
			minutos = minutos + 1;
		}
		
		while (minutos > 60)
		{
			minutos = minutos - 60;
			horas = horas + 1;
		}
	
	std::cout<<"La forma correcta del tiempo es: ";
	std::cout<<"\n ";
	std::cout<<horas<<" horas"<<" "<< minutos<< " minutos"<< " " << segundos<<" segundos";
}



int main(){
	int horas, minutos, segundos;
	std::cout<<"Ingrese las horas";
	std::cin>>horas;
	std::cout<<"Ingrese los minutos";
	std::cin>>minutos;
	std::cout<<"Ingrese los segundos";
	std::cin>>segundos;

	mejor (horas,minutos, segundos);
return 0;
}