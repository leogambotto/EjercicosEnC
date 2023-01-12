#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int);
int n; 

int main(){
	
	cin >> n;cout << "Factorial: " << factorial(n);
	
	getch();
	return 0;
}

int factorial(int n){
	
	if(n == 0){   // caso base
		n = 1;
	}else{    // caso general
		n = n * factorial(n-1);
	}
	
	return n;
}
