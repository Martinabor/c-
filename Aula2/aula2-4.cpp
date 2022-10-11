#include <iostream>


float prom (int n1, int n2, int n3, int n4 , int n5,int n6, int n7, int n8, int n9, int n10){
	float promd = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10)/10;
	return promd;
}



int main (){
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	std::cin>>n1;
	std::cin>>n2;
	std::cin>>n3;
	std::cin>>n4;
	std::cin>>n5;
	std::cin>>n6;
	std::cin>>n7;
	std::cin>>n8;
	std::cin>>n9;
	std::cin>>n10;
	
	std::cout<<"El promedio es:" " "<< prom (n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);

return 0;
}