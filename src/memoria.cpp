#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a = 5;
    int* direccion;

    cout << direccion << endl;  // Imprime la coordenada (direccion en si)
    cout << &direccion << endl; // Imprime la ubicacion de la variable direccion
    cout << *direccion << endl; // Accede al valor almacenado en esa coordenada
    
    cout<<malloc(4) <<endl;
    return 0;
}