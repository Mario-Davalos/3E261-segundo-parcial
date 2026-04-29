#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
int a;
cout << &a <<endl;
cout << sizeof(a) << endl;

    cout << "int: " <<sizeof(char) << endl;

    cout<<"double:" <<sizeof(double) <<endl;

    cout<<"float:" <<sizeof(float) <<endl;

    cout<<"long:" <<sizeof(long) <<endl;

    cout<<"char:" <<sizeof(char) <<endl;

    cout<<"booleano:" <<sizeof(bool) <<endl;
      cout << "int: " <<sizeof(char*) << endl;

    cout<<"double:" <<sizeof(double*) <<endl;

    cout<<"float:" <<sizeof(float*) <<endl;

    cout<<"long:" <<sizeof(long*) <<endl;

    cout<<"char:" <<sizeof(char*) <<endl;

    cout<<"booleano:" <<sizeof(bool*) <<endl;

     int* direccion;

     cout <<direccion<< endl;
     cout <<&direccion << endl;

return 0;
}