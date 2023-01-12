#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3],*p_alumno = alumno;

void datos();
void mayor(Alumno *);    // almuno=que sería el nombre de la estructura y el asterico para marcar para la primera pos

int main(){
	
	datos();
	mayor(p_alumno);
	
	getch();
	return 0;
}

void datos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout << "Digite su nombre: " ; cin.getline((p_alumno+i)->nombre,30,'\n');
		cout << "Edad: "; cin >> (p_alumno+i)->edad;
		cout << "Promedio: "; cin >> (p_alumno+i)->promedio;
	}
}

void mayor(Alumno *p_alumno){
	float mayor=0.0;
	int pos;
	
	for(int i=0;i<3;i++){
		if((p_alumno+i)->promedio > mayor){
			mayor= (p_alumno + i)->promedio;
			pos= i;
		}
	}
	
	cout << "\nEl mejor promedio es de " << (p_alumno+pos)->promedio << " del alumno " << (p_alumno+pos)->nombre
	     << " de " << (p_alumno+pos)->edad << " años de edad.";
}
