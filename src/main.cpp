#include <iostream>
#include <foco.hpp>

int main (int argc. char const *argv[])

foco foquito;

foquito.encender();
foquito.apagarleerestado();

std::cout
<<"estado foco:"
<<foquito.leerestado()
<<std::endl;

return 0;