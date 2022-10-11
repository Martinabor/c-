#include <iostream>

void carga(int w[5]);

void mostrar(int w[5]);

int cantidadCeros (int w[5]);//par saber cuantos ceros tiene el arreglo., es un ejemplo

int main(){
	
	int a[5];
		cargar (a); //se puede nombrar igual que w o diferente, no influye, es lo mismo.
		mostrar (a);
		std::cout<<cantidadCeros (a);
}

void cargar (int w[5])
{
	for (i = 0; i<=4; i++)
	{
		cin>>w[i];
	}
}
	
int cantidadCeros(int w[5])
{
	int c=0;
	for (i=0; i<=4; i++)
	{
		if (w[i]== 0)
			c++;
	}
} 
return c;
	
