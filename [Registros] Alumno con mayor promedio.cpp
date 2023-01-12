// Promedio de alumnos con registros
#include<iostream>
#include<conio.h>
using namespace std; 

struct alumno{
	char name[16];
	int age;
	float average;
}a[3];

int main(){
	int n;
	float prom=0;
	
	for(int i=0;i<3;i++){
		cout << "Alumno #" << i+1 << endl << endl;
		cout << "Nombre:"; cin.getline(a[i].name,16,'\n');
		cout << "Edad:"; cin >> a[i].age;
		cout << "Promedio:"; cin >> a[i].average; cout<<endl<<endl;
		
		fflush(stdin);
	}
	
	for(int i=0;i<3;i++){
		if(a[i].average > prom){
			prom=a[i].average;
			n=i;
		}
	}
	
	cout << "El alumno " << a[n].name << " tiene el mayor promedio con: " << a[n].average;

	getch();
	return 0;
}
