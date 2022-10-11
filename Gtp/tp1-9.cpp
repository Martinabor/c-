#include<iostream>

void capicua (int num){
	int aux,resto,numInv=0;
	aux=num;
 
while(aux>0)
{
      resto=aux%10;
      aux=aux/10;
      numInv=numInv*10+resto;
}
 
 if(numInv==num){
  std::cout<<"Numero es capicua";
 }
 else
 {
  std::cout<<"Numero no capicua";
 }
}

int main(){
 int num,aux,resto,numInv;
 
std::cout<<"Ingrese numero";
std::cin>>num;
 
 capicua (num);
 
 return 0;
}

