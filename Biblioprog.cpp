// Iteradores - Forward iterators

#include<iostream>
#include<fstream> // para archivos
#include<iterator> // para streams_iterators
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    ifstream archivo;

    archivo.open("documento.txt",ios::in);

    if(archivo.fail()){
        cout<<"No se puede abirir el archivo";
        exit(1);
    }

    istream_iterator<char> p(archivo); //Iterator para char 
    vector<char> frase;

    while(!archivo.eof()){ //Mientras no sea el final del archivo
        frase.push_back(*p); //Almacenamos el caracter por el que vamos
        p++;
    }

    //mostramos el vector frase
    for(int i=0; i<frase.size();i++){
        cout<<frase[i];
    }
    cout<<endl;

    archivo.close();

	return 0;
}