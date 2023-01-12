#include<iostream>
using namespace std;
int sumaf[100], sumacol[100];
int main(){
	int fila, columna; cin >> fila >> columna; 
	int matriz[fila][columna];
	
	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
			cin >> matriz[i][x];
			sumaf[i]+= matriz[i][x];
		}
	}
	
	for(int i=0;i<columna;i++){
		for(int x=0;x<fila;x++){
			sumacol[i]+= matriz[x][i];
		}
	}
	
	for(int i=0;i<fila;i++){cout << sumaf[i] << " ";}
	cout << endl;
	for(int i=0;i<columna;i++){cout << sumacol[i] << " ";}

	return 0;
}

