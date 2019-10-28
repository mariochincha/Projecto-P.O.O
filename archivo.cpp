#include "abrirarchivo.h"

void leer_archivo(){
    ifstream archivo;
    string nombre,texto,n;
    cout<<"Escriba el nombre del archivo de texto que desea abrir(finalice con .txt): ";
    cin>>nombre;
    archivo.open(nombre.c_str(),ios::in);
    if(archivo.fail()){
        cout<<"!!!no se pudo encontrar el archivo de texto !!!"<<endl;//si no encuentra el archivo
        exit(1);}
    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    cin>>n;

}
void guardar_archivo(){
    ofstream archivo;
    string nombre,texto;
    cout<<"Escriba el nombre del archivo de texto(finalice con .txt): ";
    cin>>nombre;

    archivo.open(nombre.c_str(),ios::out); //abre el archivo
    if(archivo.fail()){
        cout<<"!!!no se pudo crear el archivo de texto correctamente!!!"<<endl;//si falla la creacion del archivo
        exit(1);
   }
    cout<<endl<<"Escriba el texto del archivo: ";
    cin.ignore();
    getline(cin,texto);
    archivo <<texto;
    archivo.close();// cierra el archivo
}

