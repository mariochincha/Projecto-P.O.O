#include <iostream>
#include "abrirarchivo.h"
using namespace std;
int main() {
    while (true) {
        int opcion;
        cout <<endl<< "BIENVENIDO AL EDITOR DE TEXTOS DEL GRUPO 6" << endl << "------------------------------------------"
             << endl << "MENU";
        cout << endl << "1. Leer archivo de texto" << endl << "2. Crear y guardar archivo de texto" << endl
             << "3. Salir";
        cout << endl << "-Ingrese el numero de la opcion que quiera realizar:" << endl;
        cin >> opcion;
        if (opcion == 1) {
            cout << "------------------------------------------" << endl
                 << "Eligio leer archivo"<<endl; // Aqui va la funcion leer_archivo
        } else if (opcion == 2) {
            cout << "------------------------------------------" << endl
                 << "Eligio guardar archivo"<<endl; // Aqui va la funcion guardar_archivo
        } else if (opcion == 3) {
            cout << "------------------------------------------" << endl << "Adios"<<endl; // sale del programa
            break;
        } else {
            cout << "------------------------------------------" << endl << "!!!!El numero que ha ingresado no es valido!!!!"<<endl;
        }
    }
    return 0;
}
