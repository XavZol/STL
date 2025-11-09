//Contenedor Lineal - deque (doble cola)

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<char> letras;

    // A B C D E F

    letras.push_front('C'); //Agregamos un elemento por el principio 
	letras.push_front('B');
    letras.push_front('A');

    letras.push_back('D'); //Agregamos un elemento al final
    letras.push_back('E');
    letras.push_back('F');

    // Mostramos los elemento sdel deque
    for(int i=0; i<letras.size();i++){
        cout<<letras[i]<<"|";
    }

    letras.pop_front(); //elimina elmentos del frente
    letras.pop_back(); //Elimina un elemnto del final

    cout<<endl;
    
     // Mostramos los elemento sdel deque
    for(int i=0; i<letras.size();i++){
        cout<<letras[i]<<"|";
    }

	return 0;
}