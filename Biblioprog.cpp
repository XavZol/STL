// Algoritmos - Iniciando con algorithm

#include<iostream>
#include<fstream> // para archivos
#include<iterator> // para streams_iterators
#include<vector>
#include<list>
#include<cstdlib>
#include<algorithm>
using namespace std;

int numeroAleatorios(){
    return rand()%10;
}

int main(){
    list<int> valores(10); //Lista de 10 elemensots enteros

    //Generado numeros aleatorios en un rango de la lista
    generate(valores.begin(),valores.end(),numeroAleatorios);

    //Mostrando los elementos de la lista
    ostream_iterator<int> salida(cout,"|");
    copy(valores.begin(),valores.end(),salida);

    //Buscar un la primera aparicion del numero 8 en la lista
    list<int>::iterator i;
    i = find(valores.begin(),valores.end(),8);

    cout<<endl;

    //Analizamos si i no sobrepasa los rangos de la lista
    if(i != valores.end()){
        cout<<"El elemento "<<*i<<" si ha sido encontrado en la lista "<<endl;
    }
    else{
        cout<<"El elemento no ha sido encontrado en la lista"<<endl;
    }

	return 0;
}