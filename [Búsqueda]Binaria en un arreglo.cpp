//los numeros deben estar ordenados de manera ascendentes 
#include<iostream>
#include<conio.h>
using namespace std; 
int main(){
	int num[]={1,2,3,4,5},inf=0,sup=5,mitad,dato; cin>>dato;
	bool band=false;
	
	while(inf < sup and band == true){
		mitad=(inf+sup)/2;
		
		if(num[mitad]==dato){
			band=true;
			break;
		}
	
		if(num[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		
		if(num[mitad]<dato){
			inf=mitad,
			mitad=(inf+sup)/2;
		}
	}
	
	if(band==true){
		cout<<"Se encontro el resultado en la posición: "<<mitad;
	}else{
		cout<<"No se ha encontrado resultado";
	}
	
	getch();
	return 0; 
}
