#include <iostream>

void cargar (int a[5], int b[5])
{	
	for (int i=0 ; i<=4 ; i++)
		std::cin>>a[i];
	for (int j=0 ; j <=4 ; j++)
		std::cin>>b[j];
	
}	

void mostrar (int a[5], int b[5])
{
	for (int i=0 ; i<=4 ; i++)
		std::cout<<a[i];
	
	std::cout<<" \n ";
	
	for (int j=0 ; j<=4 ; j++)
		std::cout<<b[j];
}

void ordenar (int z[5]) 
{
	int aux;
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(z[j] > z[j + 1])
			{
				aux =z[j];
				z[j]=z[j+1];
				z[j+1] = aux;
			}
		}
	}
	
	std::cout<<"Orden Ascendente: ";
	for (int i=0;i<5;i++)
	{
		std::cout<<z[i];
	}
}

int main(){

int x[5];
int a[5];
int b[5];

cargar(a,b);

ordenar(a);
ordenar(b);

}