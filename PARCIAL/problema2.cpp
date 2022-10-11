/*Ingresar una matriz de 3 x 3 elementos flotantes. (10 pts)
● Calcular el promedio de los elementos de la matriz cargada (10 pts)
● Reemplazar cada elemento de la matriz por el resultado de dividir el mismo por el
promedio calculado en el punto anterior. (20 pts)
● Pasar todos los elementos de la matriz a un arreglo de datos. (10 pts)
● Mostrar los datos de la matriz (10 pts)
● Mostrar los datos del arreglo resultante. (10 pts)*/

#include <iostream>

void ingresarMatriz(float matriz[3][3])
{
  std::cout << '\n';
  for (int i = 0; i <= 2; i++)
  {
    std::cout << "Ingrese la fila " << i + 1 << ": ";
    for (int j = 0; j <= 2; ++j)
    {
      std::cin >> matriz[i][j];
    }
  }
}

void mostrarMatriz(float matriz[3][3])
{
  std::cout << "La matriz ingresada es: " << '\n';
  for (int i = 0; i <= 2; ++i)
  {
    for (int j = 0; j <= 2; ++j)
    {
      std::cout << " " << matriz[i][j] << " ";
    }
    std::cout << '\n';
  }
  std::cout << '\n';
}

float Promedio(float matriz[3][3])
{
  int  prom = 0;
  for (int i = 0; i <= 2; ++i)
  {
    for (int j = 0; j <= 2; ++j)
    {
      prom = prom + matriz[i][j];
    }
  }
 prom = prom / 9;
 
 std::cout<< "El promedio de esta matriz es de:  "<<prom;
}


void matrizaarray(float matriz[3][3], float array[9])
{
  int contador = 0;
  for (int i = 0; i <= 2; ++i)
  {
    for (int j = 0; j <= 2; ++j)
    {
      array[contador] = matriz[i][j];
      contador++;
    }
	std::cout<<contador;
  }
}

void mostrararray(float array[9])
{
  std::cout << '\n';
  std::cout << "El array es: [";
  for (int i = 0; i <= 8; ++i)
  {
    std::cout << " " << array[i] << " ";
  }
  std::cout << "]";
  std::cout << '\n';
}

int main(){
	float matriz[3][3],m[3][3];
	float array[9];
	
	
	ingresarMatriz(matriz);
	mostrarMatriz(matriz);
	Promedio(matriz);
	matrizaarray(matriz,array);
	mostrararray(array);
	
}