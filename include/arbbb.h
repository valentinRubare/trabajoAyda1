#ifndef ARBBB_H
#define ARBBB_H
#include <iostream>
#include "listaa.h"
using namespace std;

template <typename T>
class arbbb
{
    public:
        arbbb();
        void insertar(const T& elemento);
        //void mostrar_arbol();
        bool es_vacio_arbol();
        bool pertenece(const T& elemento);
        int profunidad();
        int cantidad();
        void listar_hojas();
        void listar_PREORDEN();
        virtual ~arbbb();

    protected:

    private:
        struct nodo{
            T dato;
            nodo*izq=NULL;
            nodo*der=NULL;
        };
        nodo*raiz;
        void listar_PREORDEN(nodo*);
        int profunidad(nodo*,int,int&);
        void insertar(nodo*&,nodo*);
        //void mostrar_arbol(nodo*);
        int cantidad(nodo*,int &n);
        void listar_hojas(nodo*);
        bool pertenece(nodo*,int n);
};

#endif // ARBBB_H
