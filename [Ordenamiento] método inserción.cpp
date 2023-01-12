#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int n[]={4,2,1,5,3};
	int aux;
	
	for(int i=0;i<5;i++){
		aux=n[i];
		while((i>0) and (n[i-1]>aux)){
			n[i]=n[i-1];
			i--;
		}
		
		n[i] = aux;
	}
	
	
	cout<<"Numeros ordenanados"
		<<endl<<endl
		<<"Ascendentes: ";
	for(int i=0;i<5;i++){
		cout<<n[i];
	}
	
	cout<<endl
		<<"Descenentes: ";
	for(int i=4;i>=0;i--){
		cout<<n[i];
	}
	
	
	getch();
	return 0;
}

