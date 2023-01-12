#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirdatos();
int vocal(char *);

char nombre[30];

int main(){
	
	pedirdatos();
	
	cout << "La cantidad de vocales que posee el nombre es de: " << vocal(nombre);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout << "Ingrese un nombre: "; cin.getline(nombre,30,'\n');
	
	strupr(nombre);
}

int vocal(char *n){
	int cont=0;
	
	while(*n){
		switch(*n){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		n++;
	}
	
	return cont;
}
