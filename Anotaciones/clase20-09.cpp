#include <iostream>

void cargar (int a[5])
{	
	for (int i=0 ; i<=4 ; i++)
		std::cin>>a[i];
}	
	
void mostrar (int a[5])
{
	for (int i=0 ; i<=4 ; i++)
		std::cout<<a[i];
}

int contarpos(int a[5])
{
	int contar = 0;
	
	for (int i=0 ; i<=4 ; i++)
		if (a[i]>0)
			contar++;
		
	return contar;
}

int main(){
	int x[5];
	
	cargar(x);
	
	std::cout<<contarpos(x);
	mostrar (x);
	
	
	return 0;
}