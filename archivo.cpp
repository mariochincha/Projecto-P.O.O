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
    int e = 1;
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
    int opcion;
    cout  << "Opciones de texto";
    cout << endl << "1. Alinear a la izquerda" << endl << "(2 u otro). ninguna" << endl;
    cout << endl << "-Ingrese el numero de la opcion que quiera realizar:" << endl;
    cin >> opcion;
    if (opcion == 1) {
        cout << "------------------------------------------" << endl
             << "Eligio alinear a la izquerda"<<endl; // Aqui va la funcion leer_archivo
        for (int i = 0;i<texto.size();i++){
            if(i>60*e && texto[i] == ' '){
                archivo<< endl;
                e++;
                i++;
            }
            archivo << texto[i];
        }
    }
    archivo.close();// cierra el archivo
}
void contar_palabra(){
    ifstream archivo;
    string nombre,texto,busqueda;
    cout<<"Escriba el nombre del archivo de texto en el que desea buscar la palabra(finalice con .txt): ";
    cin>>nombre;
    archivo.open(nombre.c_str(),ios::in);
    if(archivo.fail()){
        cout<<"!!!no se pudo encontrar el archivo de texto !!!"<<endl;//si no encuentra el archivo
        exit(1);}

    while(!archivo.eof()){
        getline(archivo,texto);
    }
    int n = 0;
    string a;
    cout<<"Escriba la palabra a buscar: ";
    cin>>a;
    char sa[a.size() + 1];
    strcpy(sa, a.c_str());
    for (int i=0; i<strlen(sa); i++)
        sa[i] = tolower(sa[i]);
    string s = texto;
    char cstr[s.size() + 1];
    strcpy(cstr, s.c_str());
    for (int i=0; i<strlen(cstr); i++)
        cstr[i] = tolower(cstr[i]);



    for (int i=0; i<strlen(cstr); i++){
        if(cstr[i]==sa[0]){
            for(int j = 1+i; j<strlen(sa)+i;j++){

                if(sa[j-i]!=cstr[j]){
                    break;
                }
                else{
                    if(j-i+1 == strlen(sa) ){
                        n++;
                    }
                }
            }
        }
    }
    if(n == 0)
        cout<<"No se encontro la palabra";
    cout<<"El numero de veces que se repite "<<a<<" es: "<<n;
    archivo.close();
}
void buscar_palabra() {
    ifstream archivo;
    string nombre, texto, busqueda;
    cout << "Escriba el nombre del archivo de texto en el que desea buscar la palabra(finalice con .txt): ";
    cin >> nombre;
    archivo.open(nombre.c_str(), ios::in);
    if (archivo.fail()) {
        cout << "!!!no se pudo encontrar el archivo de texto !!!" << endl;//si no encuentra el archivo
        exit(1);
    }

    while (!archivo.eof()) {
        getline(archivo, texto);
    }
    int n = 0;
    string a;
    cout << "Escriba la palabra a buscar: ";
    cin >> a;
    char sa[a.size() + 1];
    strcpy(sa, a.c_str());
    for (int i = 0; i < strlen(sa); i++)
        sa[i] = tolower(sa[i]);
    string s = texto;
    char cstr[s.size() + 1];
    strcpy(cstr, s.c_str());
    for (int i = 0; i < strlen(cstr); i++)
        cstr[i] = tolower(cstr[i]);


    for (int i = 0; i < strlen(cstr); i++) {
        if (cstr[i] == sa[0]) {
            for (int j = 1 + i; j < strlen(sa) + i; j++) {

                if (sa[j - i] != cstr[j]) {
                    break;
                } else {
                    if (j - i + 1 == strlen(sa)) {
                        n++;
                    }
                }
            }
        }
    }
    if (n == 0)
        cout << "No se encontro la palabra";
    cout << "Se ha encontrado la palabra en el texto ";
}