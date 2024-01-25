#ifndef MENU_FILA_H_INCLUDED
#define MENU_FILA_H_INCLUDED
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <filaaa.h>

void menu_fila(){
    filaaa<int> fila;
    //int i=0;
int menu_fila=1;
    while (menu_fila != 0) {
            cout<<" "<<endl;
    cout <<"0: - salir " << endl;
    cout <<"1: - Agregar un elemento a la fila. " << endl;
    cout <<"2: - Retirar el proximo elemento de la fila. " << endl;
    cout <<"3: - Consultar el valor del proximo elemento a retirar de la fila (sin retirarlo). " << endl;
    cout <<"4: - Consultar la cantidad de elementos que contiene la fila. " << endl;
    cout <<"5: - Consultar si la fila esta vacia. " << endl;
    //cout <<"6: - mostrar fila. " << endl;
    cin >> menu_fila ;
    system("cls");
        if ((menu_fila>5)){
            cout << endl;
            cout <<"el valor ingresado es incorrecto ,porfavor pruebe con los valores 0--6 " << endl;
            cout << endl;
        } else {
            switch(menu_fila)
            {
                case 1:
                     cout <<"cargar dato: " << endl;
                    int e;
                    cin >> e ;
                    fila.insertar_fila(e);
                break;
                case 2:
                    if (!fila.es_vacia())
                        fila.quitar_frente();
                break;
                case 3:
                    cout <<"dato: " <<fila.consultar();
                break;
                 case 4:
                     cout<<" cant:"<<fila.cantidad();
                break;
                case 5:
                     if (fila.es_vacia()==true){
                        cout<<"la fila esta vacia";
                     }else{
                        cout<<"la fila NO esta vacia";
                     }
                break;
                //case 6:fila.mostrar();
                //break;
            }
        }
    }
}


#endif // MENU_FILA_H_INCLUDED
