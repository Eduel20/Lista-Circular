#include <iostream>
#include "listadoble.h"

using namespace std;

int main( ) {
	listadoble<int> enteros;
	
	enteros.pushfront(3);
	enteros.pushfront(2);
	enteros.pushfront(1); 
	
	enteros << 1 << 5 << 1;
	
	cout << endl << "Tamaño: "<< enteros.size() << endl << endl;
	
	enteros.print();
	cout << "Remove if any \"1\"s are found!" << endl;
	enteros.remove_if(1); 

    cout << endl << "Tamaño 2: "<< enteros.size() << endl << endl;

    enteros.print();  
	
	enteros.~listadoble();
	
}
