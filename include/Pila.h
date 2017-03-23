#include "Nodo.h"

class Pila
{
public:
    int Dato;
    Nodo *Tope,*Base;
    Pila();
    Pila(int Dato);
    bool IsVacio();
    void Push(int Dato);
    int Pop();
    Nodo* Buscar(int ref);
};
