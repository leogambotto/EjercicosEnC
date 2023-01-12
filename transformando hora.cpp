// Transformar horario de 24 horas a 12

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a; char b;
	string c;
    
    cout << "Ingrese la hora y luego los minutos\n";
    cin>>a>>b>>c;
    
    if(a == 0)
        cout<< "12:"<<c<<"AM"<< endl;
    else if(a < 10)
        cout<<"0"<<a<<b<<c<<"AM"<< endl;
    else if(a < 12)
        cout<<a<<b<<c<<"AM"<< endl;
    else if (a == 12)
        cout<<a<<b<<c<<"PM"<< endl;
    else if (a < 22)
        cout << "0" << a-12 << b << c << " PM" << endl;
    else cout << a-12 << b << c << " PM" << endl;
}
