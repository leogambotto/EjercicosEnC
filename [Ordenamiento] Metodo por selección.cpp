#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={3,2,1,4,5};
	int aux,min;
	
	for(int i=0;i<5;i++){
		min=i; //Primera pos "3"
		for(int j=i+1;j<5;j++){ // j=i+1 arranca desde la segunda pos
			if(numeros[j]<numeros[min]) //n[j] empieza desde el "2" y el n[min] la primera pos
			{
				min=j;	
			}
		}
		aux=numeros[i]; //en aux se guarda el "2"
		numeros[i]=numeros[min]; //el "3" se guarda en n[i](en la posicion del 2)
		numeros[min]=aux; // el 2 se guarda en la pos que estaba el 3, en la primera
	}
	
	cout<<"Ordenados ascendentes: ";
	for(int i=0;i<5;i++){cout<<numeros[i]<<" ";}
	cout<<"\nOrdenados descendentes: ";
	for(int i=4;i>=0;i--){cout<<numeros[i]<<" ";}
	
	getch();
	return 0;
}
