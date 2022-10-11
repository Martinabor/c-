#include <iostream>


using namespace std;

bool booleano(int numero) {

    if (numero % 2 == 0) {
        cout << "El numero es Par";
    }
    else {
        cout << "El numero es Impar";
    }
    return true;

    return false;
}

int main()
{
    int numero;

    cout << "Digite el numero a analizar: \n";
    cin >> numero;

	booleano (numero);
}

