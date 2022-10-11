//Se carga un arreglo con números positivos y negativos. Se pide realizar un
//programa que permite cargar dos arreglos auxiliares, uno que contenga los números
//positivos y otro que contenga los negativos

#include <iostream>

void arrayaux (int n, int a[])
{	
	int negativos[n], contneg = 0;
	int positivo[n], contpos = 0;
	
	for (int i = 0 ; i <= n - 1; i++)
	{
		if (a[i] < 0 )
		{
			negativos[contneg] = a[i];
			++contneg;
		}
		
	}
	
	for (int l = 0 ; l <= n-1; l++)
	{
		if (a[l] > 0)
		{
			positivo[contpos] = a[l];
			contpos++;
		}
	}
	
	std::cout<<"Negativos: [";
		for (int j = 0; j <= contneg -1; j++)
		{
			std::cout<<" " << negativos[j] << " ";
		}
	std::cout<<"] " << "\n";
	
	std::cout<< "Positivos: [";
		for (int k = 0; k <= contpos -1; k++)
		{
			std::cout <<" "<< positivo[k] << " ";
		}
	std::cout<<"] " << "\n";
}

int main(){
	
	int n;
	std::cout<<"Ingrese la cantidad de numeros a calcular si es negativo o positivo";
	std::cin>>n;
	
	int a[n];
	
	for (int i = 0 ; i<= n-1 ; i++){
		std::cout<<"Ingrese los numeros ";
		std::cin>>a[i];
	}
	
	arrayaux (n,a);
	

	return 0;
}
