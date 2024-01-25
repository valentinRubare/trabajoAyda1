#ifndef FILAAA_H
#define FILAAA_H
#include <iostream>
using namespace std;

template <typename T>
class filaaa
{
    public:
        filaaa();
        void insertar_fila(const T& elemento);
        bool es_vacia();
        void quitar_frente();
        T consultar();
        int cantidad();
        //void mostrar();
        virtual ~filaaa();

    protected:

    private:
        struct nodo{
            T dato;
            nodo*sig;
        };
    nodo*frente;
    nodo*fin;
};

#endif // FILAAA_H
