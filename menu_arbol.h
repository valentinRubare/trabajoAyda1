#ifndef MENU_ARBOL_H_INCLUDED
#define MENU_ARBOL_H_INCLUDED
#include <iostream>
using namespace std;
#include <stdlib.h>
#include "arbbb.h"

void menu_arbol(){
    arbbb<int> arbol;
    int e;
int menu_arbol=1;
    while (menu_arbol != 0) {
            cout<<" "<<endl;
    cout <<"0: - salir " << endl;
    cout <<"1: - Agregar un elemento al arbol " << endl; //ya esta
    cout <<"2: - Verificar si un elemento pertenece al arbol " << endl; // ya esta
    cout <<"3: - Consultar la cantidad de elementos que contiene el arbol. " << endl; // ya esta
    cout <<"4: - Consultar si el arbol esta vacio. " << endl; //ya esta
    cout <<"5: - Consultar la profundidad del arbol. " << endl;//ya esta
    cout <<"6: - Listar los elementos que forman la frontera del arbol. " << endl;
    cout <<"7: - Listar los elementos del árbol en algún orden propuesto. " << endl; //ya esta
    //cout <<"8: - mostrar_arbol " << endl; //ya esta
    cin >> menu_arbol ;
    system("cls");
        if ((menu_arbol>7)){
            cout << endl;
            cout <<"el valor ingresado es incorrecto ,porfavor pruebe con los valores 0--8 " << endl;
            cout << endl;
        } else {
            switch(menu_arbol)
            {
                case 1:
                cout <<"cargar dato" << endl;
                cin>>e;
                arbol.insertar(e);
                break;
                case 2:
                int e;
                cout <<"cargar dato" << endl;
                cin>>e;
                 if (arbol.pertenece(e)==true){
                    cout<<"existe el elemento ";
                 }else{
                    cout<<"NO existe el elemento ";
                 }
                break;
                case 3:
                     cout <<"cantidad de elementos en el arbol: " << arbol.cantidad();
                break;
                case 4:
                     if (arbol.es_vacio_arbol()==true){
                        cout <<"el arbol esta vacio ";
                     }else{
                        cout <<"el arbol tiene elementos: ";
                     }
                break;
                break;
                case 5:
                 if (arbol.es_vacio_arbol()!=true){
                    cout <<"profunidad: "<<arbol.profunidad();
                    }else{
                        cout <<"no hay elementos en el arbol ";
                    }
                break;
                case 6:
                        arbol.listar_hojas();
                break;
                 case 7:
                     arbol.listar_PREORDEN();
                break;
                //case 8:
                  //  arbol.mostrar_arbol();
                //break;
            }
        }
    }
}


#endif // MENU_ARBOL_H_INCLUDED
