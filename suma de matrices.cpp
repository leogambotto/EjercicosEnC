#include<iostream>
#include<conio.h>
#include<stdlib.h>  // new y delete
using namespace std;

void datos(); void sumarmatrices(int **, int **, int, int); void mostrar(int **, int, int);

int **p_matriz1, **p_matriz2, nfil, ncol;

int main(){
	
	datos();
	sumarmatrices(p_matriz1, p_matriz2, nfil, ncol);
	mostrar(p_matriz1, nfil, ncol);
	
	//liberar memoria utilizada
	for(int i=0;i<nfil;i++){
		delete[] p_matriz2[i];
	}
	delete[] p_matriz2;
	
	for(int i=0;i<nfil;i++){
		delete[] p_matriz1[i];
	}
	delete[] p_matriz1;
	
	getch();
	return 0;
}

void datos(){
	cout << "Ingrese el numero de filas: "; cin >> nfil;
	cout << "Ingrese el numero de columnas: "; cin >> ncol;
	
	// reservando memoria para la segunda matriz
	p_matriz1= new int*[nfil]; // Reservar memoria para las filas de mi primera matriz
	for(int i=0;i<nfil;i++){
		p_matriz1[i]= new int[ncol];
	}
	cout << "\nIngresar los elementos para la primera matriz\n";
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			cout << "[" << i << "][" << x << "]: ";
			cin >> *(*(p_matriz1+i)+x);     //es lo mismo pero con p_matriz1[i][x]
		}
	}
	
	
	// reservando memoria para la segunda matriz
	p_matriz2= new int*[nfil]; // Reservar memoria para las filas de mi primera matriz
	for(int i=0;i<nfil;i++){
		p_matriz2[i]= new int[ncol];
	}
	cout << "\nIngresar los elementos para la segunda matriz\n";
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			cout << "[" << i << "][" << x << "]: ";
			cin >> *(*(p_matriz2+i)+x);     //es lo mismo pero con p_matriz2[i][x]
		}
	}
}
void sumarmatrices(int **p_matriz1,int **p_matriz2, int nfil, int ncol){
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			*(*(p_matriz1+i)+x)+= *(*(p_matriz2+i)+x);
		}
	}
}
void mostrar(int **p_matriz1, int nfil, int ncol){
	cout << "\nResultado de la Matriz\n\n";
	for(int i=0;i<nfil;i++){
		for(int x=0;x<ncol;x++){
			cout << *(*(p_matriz1+i)+x) << " ";
		}
		cout << endl;
	}
}

