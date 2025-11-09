// Algoritmos STL - Matemáticos

#include<iostream>
#include<fstream> // para archivos
#include<iterator> // para streams_iterators
#include<vector>
#include<list>
#include<cstdlib>
#include<algorithm>
#include<numeric> //Para utilizar la funcion accumulate
using namespace std;

//Funcion logica para comporbar si un numero es positivo 
template <class T>
bool esPositivo(T valor){
    return (valor>=0);
}

int main(){
    vector<float> numeros;

    //Abrimos el archivo en modo lectura
    ifstream archivo("archivoDocumento.txt",ios::in);

    //Copiamos todos los elementos del archivo hacia el vectro numeros 
    copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));

    //Calculamos el maximo y el minimo de los elementos del vactor 
    cout<<"Maximo: "<<*max_element(numeros.begin(),numeros.end())<<endl;
    cout<<"Minimo: "<<*min_element(numeros.begin(),numeros.end())<<endl;

    //CAlculamos el valor promedio de los elementos del vector
    cout<<"\nValor Promedio:"
    <<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;

    //Calcular el conteo de numeros positivos
    cout<<"Cantidad de numeros positivos: "
    <<count_if(numeros.begin(),numeros.end(),esPositivo<float>)<<endl;

	return 0;
}