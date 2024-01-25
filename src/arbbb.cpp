#include "arbbb.h"
#include <iostream>
#include "cstddef"
#include "listaa.h"
using namespace std;

template <typename T>arbbb<T>::arbbb()
{
    this->raiz=NULL;
}

template <typename T> void arbbb<T>::insertar(const T& elemento){
    nodo*nuevo=new nodo;
    nuevo->dato=elemento;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    insertar(raiz,nuevo);
}

template <typename T> void arbbb<T>::insertar(nodo*&raiz,nodo*nodo_nuevo)
{
if (raiz ==NULL) {
    raiz=nodo_nuevo;
}
else{
    if (nodo_nuevo->dato > raiz->dato){
        insertar(raiz->der,nodo_nuevo);
        }
    else{
        insertar(raiz->izq,nodo_nuevo);
    }
}
}

template <typename T> int arbbb<T>::cantidad()
{
    int cont=0;
return cantidad(raiz,cont);
}

template <typename T> int arbbb<T>::cantidad(nodo*raiz,int &cont){
if (raiz != NULL){
        cantidad(raiz->izq,cont);
        cont++;
        cantidad(raiz->der,cont);
}
return cont;
}

/*template <typename T> void arbbb<T>::mostrar_arbol()
{
mostrar_arbol(raiz);
}

template <typename T> void arbbb<T>::mostrar_arbol(nodo*raiz){
if (raiz != NULL){
    mostrar_arbol(raiz->izq);
    cout<<"dato :"<<raiz->dato<<endl;
     mostrar_arbol(raiz->der);
    }
}*/


template <typename T> bool arbbb<T>::es_vacio_arbol()
{
    if (raiz!=NULL){
        return false;
    }else{
        return true;
    }
}

template <typename T> bool arbbb<T>::pertenece(const T& elemento)
{
    return pertenece(raiz,elemento);
}

template <typename T> bool arbbb<T>::pertenece(nodo*raiz,int n){
    if (raiz != NULL){
        if(raiz->dato == n){
            return true;
        }else{
            if(raiz->dato > n){
             pertenece(raiz->izq,n);
             }else{
             pertenece(raiz->der,n);
             }
        }
    }
}

template <typename T>int arbbb<T>::profunidad()
{
 int elemento=0;
 int element=0;
return profunidad(raiz,elemento,element);
}

template <typename T> int arbbb<T>::profunidad(nodo*raiz,int n, int&pm){
    if (raiz!=NULL){
        if (pm<n){
            pm=n;
        }
         profunidad(raiz->izq,n+1,pm);
         profunidad(raiz->der,n+1,pm);
    }
    return pm;
}

template <typename T> void arbbb<T>::listar_PREORDEN(){
listar_PREORDEN(raiz);
}

template <typename T> void arbbb<T>::listar_PREORDEN(nodo*raiz){
listaa<int> listt;
    if(raiz!=NULL){
        listt.insertar_al_principio(raiz->dato);
        //listt.mostrar_lista();
        listar_PREORDEN(raiz->izq);
        listar_PREORDEN(raiz->der);
    }
}

template <typename T> void arbbb<T>::listar_hojas(){
listar_hojas(raiz);
}

template <typename T> void arbbb<T>::listar_hojas(nodo*raiz){
listaa<int> listt;
    if(raiz!=NULL){
        listar_hojas(raiz->izq);
        listar_hojas(raiz->der);
        if ((raiz->izq==NULL)&&(raiz->der==NULL)){
            listt.insertar_al_principio(raiz->dato);
            //listt.mostrar_lista();
        }
    }
}



template <typename T> arbbb<T>::~arbbb()
{
    //dtor
}

template class arbbb<int>;
