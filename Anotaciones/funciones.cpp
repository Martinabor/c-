#include <iostream>
using namespace std;

void suma (int x, int y);

int main(){
	int a,b,c,d,e,f;
	cin>>a;cin>>b;
	suma (a , b);
	cin>>c;cin>>d;
	suma (c , d);
	cin>>e;cin>>f;
	suma(e , f);
return 0; }

void suma (int x , int y){
	int s;
	s = x + y;
	cout<<s;
}