#include "listaa.h"
#include <iostream>
#include "cstddef"
using namespace std;

template <typename T> listaa<T>::listaa()
{
    this->lista=NULL;
}

template <typename T> void listaa<T>::insertar_al_principio(const T& elemento){
nodo*aux = new nodo;
aux->elem=elemento;
aux->sig=lista;
lista=aux;
}


template <typename T>int listaa<T>::cantidad()const
{
nodo*aux=lista;
int cont=0;
    while (aux!= NULL){
        cont++;
        aux=aux->sig;
    }
return cont;
}


template <typename T> bool listaa<T>::es_vacia()const
{
    if (lista==NULL){
        return true;
    }else{
        return false;
    }
}

template <typename T>void listaa<T>::insertar_al_final(const T& elemento)
{
    if (lista!=NULL){
    nodo*cursor=lista;
    while (cursor->sig!= NULL){
    cursor=cursor->sig;
    }
    nodo * aux= new nodo();
    aux->elem=elemento;
    aux->sig = NULL;
    cursor->sig=aux;
    }else {
    nodo * aux= new nodo();
    aux->elem=elemento;
    aux->sig = lista;
    lista=aux;
    }
}


template <typename T> void listaa<T>::insertar_en_una_posicion(const T& elemento,const unsigned int pos)
{
    if ((lista!=NULL)and(pos>1)){

    nodo*cursor=lista;

    for(int i=1; i<(pos-1);i++){
        cursor=cursor->sig;
    }
    nodo * aux= new nodo();
    aux->elem=elemento;
    aux->sig = cursor->sig;
    cursor->sig = aux;
    }else {
    nodo * aux= new nodo();
    aux->elem=elemento;
    aux->sig = lista;
    lista=aux;
    }
}


/*template <typename T>void listaa<T>::mostrar_lista()const
{
nodo*aux=lista;
    while (aux!= NULL){
        cout <<""<< aux->elem <<"-";
        aux=aux->sig;
    }
}*/

template <typename T> bool listaa<T>::consultar(const T& elemento){
nodo*aux=lista;
    while ((aux!= NULL) && (aux->elem!=elemento)) {
        aux=aux->sig;
    }
    if (aux== NULL){
        return false;
    }else{
        return true;
    }
}

template <typename T> void listaa<T>::eliminar(const T& elemento)
{

   if (lista->elem != elemento){
    nodo*cursor=lista;
   while ((cursor!=NULL)and(cursor->sig->elem !=elemento)) {
    cursor=cursor->sig;
    }
   nodo *aux=cursor->sig;
   cursor->sig=aux->sig;
   delete(aux);
   } else {
    nodo *aux=lista;
   lista=aux->sig;
   delete(aux);
   }
}



template <typename T> T listaa<T>::iterar(const T& elemento){
nodo*aux=lista;
int k=0;
    if ((aux!= NULL)&& (elemento == 0)){
        cout <<"dato :"<<aux->elem<<endl;
        return aux->elem;
    }
        while ((aux->sig!= NULL)&& (k<elemento)){
            aux=aux->sig;
            k++;
        }
        if (elemento>0){
        cout <<"dato :"<<aux->elem<<endl;
        return aux->elem;
        }
}

template <typename T>listaa<T>::~listaa()
{
    //dtor
}

template class listaa<int>;
