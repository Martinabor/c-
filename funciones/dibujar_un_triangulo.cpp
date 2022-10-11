#include <bits/stdc++.h>

using namespace std;

void Triangulo(int N);

int main(void)
{
    int n;

    cout << "ingrese la altura maxima del triangulo." << endl;
    cin >> n;
    if (n < 0)
    {
        while(n < 2)
        {
            cout << "ingrese el tamaño del triangulo." << endl;
            cin >> n;    
        }
    }

    Triangulo(n);

    return 0;
}

void Triangulo(int N)
{
    int i;
    while(i < N)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "x";
        }

        i+= 1;
        cout << endl;
    }

    while(i > 0)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "x";
        }

        i = i - 1;
        cout << endl;
    }

}