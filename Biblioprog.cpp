//Contenedor Lineal - list

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> datos;

    // 7 2 5 1 6 

    //Agregar elementos
    datos.push_back(5); // Agregar por el final de la lista
    datos.push_back(1);
    datos.push_back(6);


    datos.push_front(2); // Agregar por el principio d ela lista
    datos.push_front(7);

    //ordenar los elementos de mayor a menor
    datos.sort();

    //1 2 5 6 7

    //Creamos el iterador
    list<int>::iterator i;

    i = datos.begin();

    while(i != datos.end()){
        cout<< *i <<"|";

        i++;
    }

    cout<<endl;

    //Eliminar elementos de la lista 
    datos.pop_back();
    datos.pop_front();

    i = datos.begin();

    while(i != datos.end()){
        cout<< *i <<"|";

        i++;
    }
    
	return 0;
}