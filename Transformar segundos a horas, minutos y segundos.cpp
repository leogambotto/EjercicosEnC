#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int ts,h,m,s;
	
	cout<<"Ingrese una cantidad de tiempo en segundos: "; cin>>ts;
	
	tiempo(ts,h,m,s);
	
	cout<<"\nTiempo equivalente: "<<h<<":"<<m<<":"<<s;
	
	getch();
	return 0;	
}

void tiempo(int ts,int& h,int& m,int& s){
	h=ts/3600;
	ts%=3600;
	m=ts/60;
	s=ts%60;
}
