#include <iostream>
using namespace std;

string name =nom1;
string name =nom2;

int main (){
char nom1, nom2;
int ed1,ed2;

std::cout<<"Ingrese los dos nombres";
std::cin>>nom1>>nom2;
std::cout<<"Ingrese las edades en el orden que ingreso los nombres";
std::cin>>ed1>>ed2;

if (ed1>ed2){
	std::cout<<nom1;
}
else std::cout<<nom2;


return 0;
}