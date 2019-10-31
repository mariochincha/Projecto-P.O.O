#include <iostream>
#include "abrirarchivo.h"
using namespace std;
int main() {
    while (true) {
        int opcion;
        cout  << endl << "------------------------------------------"<<endl<< "BIENVENIDO AL EDITOR DE TEXTOS DEL GRUPO 6" << endl << "------------------------------------------"
             << endl << "MENU";
        cout << endl << "1. Leer archivo de texto" << endl << "2. Crear y guardar archivo de texto" << endl
             <<"3. Buscar si se encuentra la palabra" <<endl<<"4. Cantidad de veces que aparece una palabra "<<endl<<"5. Salir"<<endl;
        cout << endl << "-Ingrese el numero de la opcion que quiera realizar:" << endl;
        cin >> opcion;
        if (opcion == 1) {
            cout << "------------------------------------------" << endl
                 << "Eligio leer archivo"<<endl; // Aqui va la funcion leer_archivo
                 leer_archivo();
        } else if (opcion == 2) {
            cout << "------------------------------------------" << endl
                 << "Eligio guardar archivo"<<endl; // Aqui va la funcion guardar_archivo
                 guardar_archivo();
        } else if (opcion == 5) {
            cout << "------------------------------------------" << endl << "Adios"<<endl; // sale del programa
            break;
        }  else if (opcion == 4) {
            cout << "------------------------------------------" << endl
                 << "Eligio cantidad de veces que aparece una palabra" << endl;// Aqui va la funcion guardar_archivo
            contar_palabra();
        }else if (opcion == 3) {
                cout << "------------------------------------------" << endl
                     << "Eligio buscar palabra" << endl;// Aqui va la funcion guardar_archivo
                buscar_palabra();
        }
        else {
            cout << "------------------------------------------" << endl << "!!!!El numero que ha ingresado no es valido!!!!"<<endl;
        }
    }
    return 0;
}