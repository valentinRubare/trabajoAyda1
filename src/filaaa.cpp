#include "filaaa.h"
#include <iostream>
#include "cstddef"
using namespace std;

template <typename T>filaaa<T>::filaaa()
{
        this->frente=NULL;
        this->fin=NULL;
}

template <typename T>bool filaaa<T>::es_vacia(){
nodo*aux=frente;
if (aux==NULL){
    return true;
}else
    return false;
}

template <typename T>void filaaa<T>::quitar_frente(){
    int dato=frente->dato;
    nodo*aux=frente;
    if (frente==fin){
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->sig;
    }
    delete aux;
}


template <typename T>void filaaa<T>::insertar_fila(const T& elemento){
    nodo*nodo_nuevo=new nodo();
    nodo_nuevo->dato=elemento;
    nodo_nuevo->sig=NULL;
if (es_vacia()){
    frente=nodo_nuevo;
    }else{
        fin->sig=nodo_nuevo;
        }
    fin=nodo_nuevo;
}

template <typename T>int filaaa<T>::cantidad(){
nodo*aux=frente;
int cont=0;
    while (aux!=NULL){
        aux=aux->sig;
        cont++;
    }
return cont;
}

/*template <typename T>void filaaa<T>::mostrar(){
nodo*aux=frente;
while (aux!=NULL){
        cout<<"-" <<aux->dato;
        aux=aux->sig;
    }
}*/

template <typename T>T filaaa<T>::consultar(){
nodo*aux=frente;
    if (aux != NULL){
        return aux->dato;
        }
}

template <typename T>filaaa<T>::~filaaa()
{
    //dtor
}


template class filaaa<int>;
