//p1
/*Ingresar una matriz de 3 x 3 elementos enteros. (10 pts)
● Reemplazar cada elemento de la matriz por uno si es divisible por dos. (20 pts)
● Pasar los elementos no reemplazados en la matriz a un arreglo (20 pts)
● Mostrar los datos de la matriz (10 pts)
● Mostrar los datos del arreglo resultante. (10 pts)*/

#include <bits/stdc++.h>
using namespace std;

void cargar_matriz(int x[3][3], int y[3][3]);
void reemplazar_valores_por_uno(int x[3][3]);
void arreglo_con_elementos_no_reemplazados(int x[3][3], int y[], int contador[]);
void mostrar_matriz_resuelta(int x[3][3]);
void mostrar_datos_arreglo(int y[], int contador[]);

int main()
{
    int matriz[3][3];
    int matriz_auxiliar[3][3];
    int z[1];
    int arreglo[9];

    cargar_matriz(matriz, matriz_auxiliar);
    reemplazar_valores_por_uno(matriz);
    arreglo_con_elementos_no_reemplazados(matriz_auxiliar, arreglo, z);
    mostrar_matriz_resuelta(matriz);
    mostrar_datos_arreglo(arreglo, z);

    return 0;
}

void cargar_matriz(int x[3][3], int y[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "ingrese el valor para la posicion (" << i << ", " << j << ")" << endl;
            cin >> x[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            y[i][j] = x[i][j];
        }
    }
}

void reemplazar_valores_por_uno(int x[3][3])
{
    int auxiliar = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            auxiliar = x[i][j]%2;
            if(auxiliar == 0){x[i][j] = 1;}
        }
    }
}

void arreglo_con_elementos_no_reemplazados(int x[3][3], int y[9], int contador[])
{
    int auxiliar = 0;
    int v = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        { 
            auxiliar = x[i][j]%2;
            if(auxiliar != 0)
            {
                y[v] = x[i][j];
                v++;
            }
        }
        cout << endl;
    }
    contador[0] = v;
    cout << contador << ": c" << endl;

}

void mostrar_matriz_resuelta(int x[3][3])
{
    cout << "matriz modificada: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << " " << x[i][j] << ",";
        }
        cout << endl;
    }
}

void mostrar_datos_arreglo(int y[], int contador[])
{
    cout << "c: " << contador[0] << endl;
    cout << "arreglo: " << endl;
    for(int i = 0; i < contador[0]; i++)
    {
        cout << " " << y[i] << ",";
    }
    cout << endl;
}
	
	
	
	
	
}