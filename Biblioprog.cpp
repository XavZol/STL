//Contenedor Lineal - vectores

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> numeros; //Arreglos enteros
	
    numeros.push_back(5); //agrega elementos al final del arreglo
	numeros.push_back(10);
	numeros.push_back(1);
	numeros.push_back(14);
	numeros.push_back(8);
	
	numeros[2] = 7; //agregar elementos en la posicion
	
	//Mostrar los elementos del vector
	for(int i=0; i<numeros.size(); i++)
		cout<<numeros[i]<<"|";
		
//	numeros.pop_back(); //elimina el ultimo elemento del arreglo
 
//	numeros.erase(numeros.begin()+1,numeros.begin()+3);

	cout<<endl;
	//Mostrar los elementos del vector
	for(int i=0; i<numeros.size(); i++)
		cout<<numeros[i]<<"|";
	
	return 0;
}