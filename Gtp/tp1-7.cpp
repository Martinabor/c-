#include <iostream>
using namespace std;

int main()
{
    int n, i=0,z=0;
    
	cout << "Inserte un numero natural: ";
        cin >> n;
	
	while (n <= 0)
    {
        cout << "Inserte un numero natural: ";
        cin >> n;
    }
   
    cout <<endl;

    while (n>z)
    {
        i++;
        z=(i*(i+1))/2;
    }
    

    if (n==z)
    {
    cout << "El numero "<<n<<" es triangular.";
    }
    else
    {
    cout << "El numero "<<n<<" no es triangular.";
    }

    cout <<endl;

    return 0;
}