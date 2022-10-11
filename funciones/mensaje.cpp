#include <iostream>

void mensj (std::string mensaje, char c, int n)
{
	for (int i = 0; i < n ; i++)
	{
		std::cout << c;
	}
	std::cout<<"\n";
	std::cout<<mensaje<<std::endl;
for (int i = 0 ; i < n; i++)
{
	std::cout<<c;
}
std::cout<<"\n";
}

int main (){
	int n;
	char c;
	std::string mensaje;
	
	std::cout<<"Ingrese cuantas n";std::cin>>n;
	std::cout<<"Ingrese el caracter";std::cin>>c;
	std::cout<<"Ingrese el mensaje a mostrar";std::cin>>mensaje;
	
mensj (mensaje, c, n);	
	
}