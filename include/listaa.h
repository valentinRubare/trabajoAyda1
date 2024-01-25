#ifndef LISTAA_H
#define LISTAA_H
#include <iostream>
using namespace std;

template <typename T>
class listaa
{
    public:
        listaa();
        void insertar_al_principio(const T& elemento);
        void insertar_al_final(const T& elemento);
        void insertar_en_una_posicion(const T& elemento,const unsigned int pos);
        bool es_vacia()const;
        int cantidad()const;
        bool consultar(const T& elemento);
        //void mostrar_lista()const;
        void eliminar(const T& elemento);
        T iterar(const T& elemento);
        virtual ~listaa();

    protected:

    private:
        struct nodo{
            T elem;
            nodo*sig;
        };
    nodo*lista;
};

#endif // LISTAA_H
