/*Obtener un programa que solicite el tamaño de un arreglo unidimensional y un número
entero x.A continuación rellenar el arreglo con los múltiplos de x. Por ejemplo, si el tamaño es
5 y x es 3, el arreglo contendrá 3, 6, 9, 12, 15. Mostrar por pantalla el arreglo obtenido.*/
#include <bits/stdc++.h>
using namespace std;

void generar_arreglo(int N, int X);

int main()
{
    int N;
    int X;
    cout << "ingrese el tamaÑo del arreglo." << endl;
    cin >> N;
    cout << "ingrese el valor del numero que sera multiplicado" << endl;
    cin >> X;

    generar_arreglo(N, X);

    return 0;
}
void generar_arreglo(int N, int X)
{
    int arreglo[N];
    for(int i = 0; i < N; i++)
    {
        arreglo[i] = X * (i+1);
    }

    for(int i = 0; i < N; i++)
    {
        cout << arreglo[i] << ", ";
    }
}