//Contenedor Lineal - Random acces iterators

#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

//Funcion template para mostrar los elementos de un contenedor
template <class Iter>
void mostrarEnPantalla(Iter inicio, Iter final){
    while(inicio != final) {
        cout<< *inicio <<"|";
        inicio++;
    }
}

int main(){
   vector<char> letras(10); //creando el vector de 10 elementos char

   //Agregando elementos al vector 
   for(int i=0; i<10; i++){
     letras[i] = 'A' + (rand() % 20);
   }

   //Visualizar los elementos del vector 
   mostrarEnPantalla(letras.begin(),letras.end());
   cout<<endl;

   //Visualizar los elementos del vector al reves
   mostrarEnPantalla(letras.rbegin(),letras.rend());
   cout<<endl;

   //Visualizar los elementos del medio del vector (1-8)
   mostrarEnPantalla(letras.begin()+1,letras.end()-1);
   cout<<endl;

	return 0;
}