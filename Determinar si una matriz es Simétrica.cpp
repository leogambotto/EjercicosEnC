#include<iostream>
#include<conio.h>
using namespace std; 

void datos();
void simetrica(int m[][100],int,int);
int m[100][100], f, c;

int main(){
	
	datos();
	simetrica(m,f,c);
	
	getch();
	return 0;
}

void datos(){
	cout << "Numero de filas: " ; cin >> f;
	cout << endl << "Numero de columna: "; cin >> c;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout << endl << "Ingrese un numero "  << "[" << i << "][" << j << "]" << " :"; 
			cin >> m[i][j];
		}
	}	
}
void simetrica(int m[][100],int f,int c){
	int cont = 0;
	if(f==c){
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				if(m[i][j]==m[j][i]){
					cont++;
				}
			}
		}	
	}
	
	if(cont == f*c){
		cout << "\nLa matriz es simetrica";
	}else{
		cout << "\nLa matriz NO es simetrica";
	}
}

