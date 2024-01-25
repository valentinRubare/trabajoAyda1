#ifndef MENU_LISTA_H_INCLUDED
#define MENU_LISTA_H_INCLUDED
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <listaa.h>

void menu_lista(){
    listaa<int> listt;
    int e;
    int i=0;
int menu_lista=1;
    while (menu_lista != 0) {
            cout<<" "<<endl;
    cout <<"0: - salir " << endl;
    cout <<"1: - insertar_al_principio " << endl;
    cout <<"2: - insertar_al_final " << endl;
    cout <<"3: - insertar_en_una_posicion " << endl;
    cout <<"4: - es_vacia " << endl;
    cout <<"5: - cantidad " << endl;
    cout <<"6: - eliminar " << endl;
    cout <<"7: - iterar " << endl;
    //cout <<"8: - mostrar_lista " << endl;
    cout <<"8: - consultar " << endl;
    cin >> menu_lista ;
    system("cls");
        if ((menu_lista>9)){
            cout << endl;
            cout <<"el valor ingresado es incorrecto ,porfavor pruebe con los valores 0--9 " << endl;
            cout << endl;
        } else {
            switch(menu_lista)
            {
                case 1:
                cout <<"cargar dato" << endl;
                cin>>e;
                listt.insertar_al_principio(e);
                break;
                case 2:
                cout <<"cargar dato" << endl;
                cin>>e;
                listt.insertar_al_final(e);
                break;
                case 3:
                cout <<"cargar dato" << endl;
                int p;
                cin>>e;
                cout <<"cargar en la posicion que usted desee" << endl;
                cin>>p;
                if (listt.es_vacia()==true){
                    // comentario:asumo cuando el usuario ingresa una posicion y la lista esta vacia lo inserta al princpio de la lista
                        listt.insertar_al_principio(e);
                    }
                    else{
                    if  (p<=listt.cantidad()+1){
                    listt.insertar_en_una_posicion(e,p);
                    }else{
                         cout <<"ingresar una posicion dentro de los parametros" <<"["<< 1 <<"--"<<listt.cantidad()+1<< "]" << endl;
                    cin>>p;
                    listt.insertar_en_una_posicion(e,p);
                }
                }
                break;
                 case 4:if (listt.es_vacia()==true){
                        cout <<"esta vacia la lista"<<endl;
                    }else{
                        cout <<"no esta vacia la lista  " <<endl;
                    }
                break;
                case 5:
                      cout <<"cantidad de elementos en la lista:  " <<  listt.cantidad() <<endl;
                break;
                case 6:
                int f;
                if (listt.es_vacia() != true){
                        cout <<"elemento a eliminar" << endl;
                        cin>>f;
                    if (listt.consultar(f)==true){
                        listt.eliminar(f);
                     }else{
                           cout <<"no esta el elemento a eliminar" << endl;
                }

                }else{
                    cout <<"la lista esta vacia , por lo tanto no se puede eliminar nada" << endl;
                }
                break;
                 case 7:
                     while (i<listt.cantidad()){
                        listt.iterar(i);
                        i++;
                    }
                    i=0;
                break;
                //case 8: listt.mostrar_lista();
                //break;
                case 8:
                int k;
                cout <<"cargar dato a buscar" << endl;
                cin >>k;
            if (listt.es_vacia()==true){
                cout <<"esta vacia la lista por lo tanto no tiene elemntos a buscar" << endl;
            }else{
                if (listt.consultar(k)==true){
                    cout<<"el elemento se encontro";
                }
                else{
                     cout<<"el elemento NO se encontro";
                }
            }
                break;
            }
        }
    }
}

#endif // MENU_LISTA_H_INCLUDED
