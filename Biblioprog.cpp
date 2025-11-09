// Algoritmos de Búsqueda y Ordenamiento

#include<iostream>
#include<fstream> // para archivos
#include<iterator> // para streams_iterators
#include<vector>
#include<list>
#include<cstdlib>
#include<algorithm>
using namespace std;

int numeroAleatorios(){
    return rand()%30;
}

//Funciion logica para calcular si un numero es par
template <class T>
bool asPar(T valor){
    return ((valor%2) == 0);
}

int main(){
    vector<int> valores(10);

    //Generamos numeros aleatorios y los guardamos dentro de vector
    generate(valores.begin(),valores.end(),numeroAleatorios);

    //Mostrar en pantalla el vector
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));

    //Creamos un nuevo vector para almacenaar los elementos pares
    vector<int> pares;

    //Iterador para recorrer el vector valores
    vector<int>::iterator i = valores.begin();

    while((i=find_if(i,valores.end(),asPar<int>)) != valores.end()){
        pares.push_back(*i);
        i++;
    }

    cout<<"\n\n Arreglo de numeros pares"<<endl;

    //Ordena el vector pares
    sort(pares.begin(),pares.end());

    //Mostramos el vector pares en pantalla
    copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));

	return 0;
}