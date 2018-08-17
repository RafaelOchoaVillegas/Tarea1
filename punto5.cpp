//punto5
#include <iostream>
using namespace std;

int main()
{
  float numero, numero1, numero2;
  cout << "entre 3 numeros: ";
  cin   >> numero >> numero1 >>numero2;
  ((numero>numero1)?((numero>numero2)?cout << "el numero mayor es:"<<numero: cout << "el numero mayor es: "<<numero2):((numero1>numero2)?cout << "el numero mayor es: "<<numero1:cout << "el numero mayor es:"<<numero2));
}
