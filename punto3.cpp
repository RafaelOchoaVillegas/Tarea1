//Punto3
#include <iostream>
using namespace std;

int main()
{
 int numero;
 cout << "entre 1 numeros entero: ";
    cin >>numero;
    ((numero==0)?cout<< "el numero es cero":((numero%2==0)? cout<<"el numero es par":cout<<"el numero es impar"));
}