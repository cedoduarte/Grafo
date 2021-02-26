#include "grafo.h"

#include <iostream>

using namespace std;

int main()
{
    Grafo *grafo = new Grafo;
    grafo->imprimir();
    delete grafo;
    return 0;
}
