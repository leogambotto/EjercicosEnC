#include<iostream>
#include<conio.h>
#include<stdlib.h> // new delete
using namespace std;

void datos();
void mostrar(int **, int ,int);

int nfil, ncol, **p_matriz;

int main(){
	
	datos();
	mostrar(p_matriz,nfil,ncol);
	
	//liberar memoria que hemos utilizado en la matriz
	for(int i=0;i<nfil;i++){
		delete[] p_matriz[i];
	}
	
	delete[] p_matriz;
	
	getch();
	return 0;
}

void datos(){
	cout << "Digite numero de filas: "; cin >> nfil;
	cout << "Digite numero de columnas: "; cin >> ncol;

	// Reservar memoria para la matriz dinamica	
	p_matriz = new int*[nfil];   // reservando memoria para filas
	for(int i=0;i<nfil;i++){
		p_matriz[i] = new int[ncol];  // reservando memoria par columnas
	}
	
	cout << "Digitando elementos de la matriz: ";
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			cout << "Digite un numero [" << i << "][" << x << "]: ";
			cin >> *(*(p_matriz+i)+x);  // p_matriz[i][j]
		}
	}
}
void mostrar(int **p_matriz, int nfil, int ncol){
	cout << "\n\nImprimiendo la matriz: \n";
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			cout << *(*(p_matriz+i)+x);
		}
		cout << endl;
	}
}
