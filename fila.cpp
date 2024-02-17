#include <iostream>
#include <queue>

using namespace std;

int main(){
    
    queue <string> cartas;

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da fila: " << cartas.size() << endl;
    cout << "primeira carta.: " << cartas.front() << endl;
    cout << "ultima carta...: " << cartas.back() << "\n\n"; 

    while (!cartas.empty())
    {
        cout << "primeira carta.: " << cartas.front() << endl;
        cartas.pop(); 
    }
    

    return 0; 
}