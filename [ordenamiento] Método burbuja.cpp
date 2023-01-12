#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int num[]={4,2,5,3,1},aux;

	for(int i=0;i<5-1;i++){      
		for(int j=0;j<5-1;j++){
			if(num[j]>num[j+1]){
				aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}
		}
	}
	
	cout<<"Numeros ordenados: ";
	
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
	getch();
	return 0;
}
