#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int a[]={3,4,2,1,5},i=0,dato; cin>>dato;
	bool band=false;
	
	while((band == false)and (i<5)){
		if(a[i] == dato){
			band = true;
		}
		i++;
	}
	if(band == false){
		cout<<"No se ha encontrado resultados.";
	}else if(band == true){
		cout<<"El resultado coincide.";
	}
	
	
	getch();
	return 0;
}
