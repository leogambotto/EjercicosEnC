#include<iostream>
#include<conio.h>
#include<stdlib.h>  // new delete
using namespace std;

void datos();
void ordenar(int *,int);
void mostrar(int *,int);


int nElementos,*elemento;

int main(){

	datos();
	ordenar(elemento,nElementos);
	mostrar(elemento,nElementos);
	
	delete[] elemento; // liberar la memoria utilizada para el arreglo dinamico
	
	getch();
	return 0;
}
void datos(){
	cout<<"Digitar el numero de elementos del arreglo: "; cin>>nElementos;
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero["<<i<<"]: "; cin>>*(elemento+i); // es lo mismo que= elemento[i]
	}
}
void ordenar(int *elemento, int nElementos){
	int aux;
	
	for(int i=0;i<nElementos;i++){
		for(int x=0;x<nElementos-1;x++){
			if(*(elemento+x)>*(elemento+x+1)){
				aux = *(elemento+x);
				*(elemento+x)=*(elemento+x+1);
				*(elemento+x+1)=aux;
			}
		}
	}
}
void mostrar(int *elemento, int nElementos){
	cout<<"\n\nMostrando arreglo ordeando: ";
		for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" "; // elemento[i]
	}
}
