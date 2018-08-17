// punto6
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string palabra, palabra1, palabra2;
 cout << "entre 3 palabras: ";
  cin   >> palabra >> palabra1 >>palabra2;
  ((palabra<palabra1)?((palabra<palabra2)?cout <<"las palabras en orden alfabetico son: "<< palabra <<", " << palabra2<<", "<< palabra1<< ", ": cout 
  << "las palabras en orden alfabetico son: "<<palabra2<<", "<<palabra<< ", "<<palabra1):((palabra1<palabra2)? cout << "las palabras en orden alfabetico son: "
  <<palabra1 <<", " << palabra2<<", " <<palabra<<", ":cout << "las palabras en orden alfabetico son: "<<palabra2<<", "<<palabra1<<palabra<< ","));
}