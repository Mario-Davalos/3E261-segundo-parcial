#pragma once 
#include <iostream>
#include <foco.hpp>

using namespace std;
class serieFocos

private:
foco focos[10];
public: 
serieFocos(){}
˜seriefocos(){}
void mostrarFocos()
{
    for(auto$$f : focos)
    {
        cout <<f.leerEstado()<<endl;
    }
    }
    void EncenderFocos(){
        for (auto &&f:focos)
    {
    f.encender();
    }
}
void apagarfocos(){
for(auto  &&f:focos)
{
    f.apagar();
}
};