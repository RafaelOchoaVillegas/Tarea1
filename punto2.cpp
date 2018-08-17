Notepad++ v7.5.8 bug-fixes:

1#include <iostream>
using namespace std;

int main()
{
  int numero1, numero2;
  cout << "entre dos numeros enteros: ";
  cin >> numero1 >> numero2;
  ((numero1>numero2)? cout <<"el numero mayor es: "<<numero1 : cout <<"el numero mayor es: " <<numero2);
  
}
