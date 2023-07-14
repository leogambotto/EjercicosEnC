// Ejercicio libreria que según el tipo de cliente y la cantidad de libros a adquirir se aplica determinado descuento
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

/*
	Name: Leonel Gambotto
	Date: 26/03/20 10:09
	Description: Activdad Libros 
*/

float imp, des; char cli; int cant, i;
	
void Datos(){
	cout << "\tCliente [" << i+1 << "]\n\n# Libreria\n# Particular\n\nIngresar el tipo de cliente[L/P]: "; cin >> cli;
	cout << "Ingrese la cantidad de unidades a adquirir: "; cin >> cant;
	cout << "Ingrese el importe bruto total: "; cin >> imp;
}


bool Cliente(char C){

	if(C == 'L'){
		return true;
	}
	
	return false;
}

int Bonificacion_L(int T){

	if(T <= 24){
		des = imp * 20; des /= 100;
	}else if(T >= 25){
		des = imp * 25; des /= 100;
	}
	
	return des;
}

int Bonificacion_P(int T){
	
	if(T < 6){
		des = 0;		
	}else if(T >= 6 && T <= 18){
		des = imp * 5; des /= 100;
	}else if(T > 18){
		des = imp * 10; des /= 100;
	}
	
	return des;
}

void Exhibo(){
	cout << "\n\n\tPRECIO FINAL\nImporte     $" << imp << endl << "Descuento  -$" << des << endl << "Total       $" << imp-des << "\n\n\n/////////////////////////////////////////////////\n\n\n";
}

int main(){
	
	for(i=0; i<50; i++){
		Datos();
		
		if(Cliente(cli) == true){	// librería
			Bonificacion_L(cant);
		}else{						// particular
			Bonificacion_P(cant);
		}
		
		Exhibo();	
	}
	
	getch();
	return 0;
}
