#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregaPila(Nodo *&, int);
void sacarPila(Nodo *&, int&); 

int main(){
	Nodo *pila = NULL;
	int dato;
	char rta;
	
	do{
		cout << "\nDigite un numero: "; cin >> dato;
		agregaPila(pila,dato);
		
		cout << "\nDeseas agregar otro elemento a pila? (S/N): "; cin >> rta;
	}while((rta=='S') or (rta=='s'));
	
	cout << "\nSacando todos los elementos de la pila: ";

	while(pila != NULL){
		sacarPila(pila,dato); 
		if(pila != NULL){
			cout << dato << " , ";
		}else{
			cout << dato << " .";
		}
	}
	
	getch();
	return 0;
}

void agregaPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout << "\tElemento " << n << " ha sido agregado a PILA correctamente.";
}

void sacarPila(Nodo *&pila, int&n){
	Nodo *aux= pila;
	n= aux->dato;
	pila = aux->siguiente;
	delete aux;
}
