// Algoritmos STL - Transformación

#include<iostream>
#include<fstream> // para archivos
#include<iterator> // para streams_iterators
#include<vector>
#include<list>
#include<cstdlib>
#include<algorithm>
#include<numeric> //Para utilizar la funcion accumulate
using namespace std;

//Funcion para pasar las letras a Mayuscula
void mayusculas(char &letra){
    if(letra>='a' && letra<='z'){
        letra = letra - ('a' - 'A');
    }
}

//Funcion unaria para determinar si una letra es una vocal
char vocales(char letra){
    return (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') ? letra : '-';
}

int main(){
    vector<char> letras;

    //Generamos letras para el vector
    for(int i=0; i<10; i++){
        letras.push_back('a' + i);
    }
    
    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    //Desordenamos el vector letras
    random_shuffle(letras.begin(),letras.end());

    cout<<"\nVector desordenado"<<endl;

    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    //Pasamos a mayusculas las letras del vector 
    for_each(letras.begin(),letras.end(),mayusculas);

    cout<<"\nVector en Mayusculas"<<endl;

    copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
    cout<<endl;

    cout<<"\nVocales del vector: "<<endl;
    //Imprimir solo las vocales
    transform(letras.begin(),letras.end(),
    ostream_iterator<char> (cout,"|"), vocales);

	return 0;
}