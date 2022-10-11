//Obtener un programa que permita crear un arreglo unidimensional con un tamaño de
//5, ingresar los datos en el arreglo y mostrarlos por pantalla
#include <bits/stdc++.h>
using namespace std;

void cargar_arreglo(int a[5]);
void mostrar_arreglo(int a[5]);

int main()
{
    int arreglo[5];
    cargar_arreglo(arreglo);
    mostrar_arreglo(arreglo);

    return 0;
}

void cargar_arreglo(int a[5])
{
    for(int i = 0; i < 5; i++)
    {
        cout << "ingrese un valor a la posicion: " << i+1 << endl;
        cin >> a[i];
    }

}

void mostrar_arreglo(int a[5])
{
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << ", ";
    }
}