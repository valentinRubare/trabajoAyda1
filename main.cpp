#include <iostream>
#include "menu_lista.h"
#include "menu_arbol.h"
#include "menu_fila.h"
using namespace std;
void menu();
int main()
{
    menu();
    return 0;
}
void menu(){
int menu=1;
    while (menu != 0) {
    cout <<"Eliga el contenedor: " << endl;
    cout <<"0: salir " << endl;
    cout <<"1: Lista " << endl;
    cout <<"2: Fila " << endl;
    cout <<"3: Arbol " << endl;
    cin >> menu ;
        if ((menu>3)){
            cout << endl;
            cout <<"el valor ingresado es incorrecto ,porfavor pruebe con los valores 0--3 " << endl;
            cout << endl;
        } else {
            switch(menu)
            {
                case 1: menu_lista();
                break;
                case 2: menu_fila();
                break;
                case 3: menu_arbol();
                break;
            }
        }
    }
}
