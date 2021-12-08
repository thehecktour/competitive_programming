#include <iostream>
#include <vector>
using namespace std;

struct Node{
       public:
              int valor;
       Node *proximo;
};

void mostrarListaEncadeada(Node * n){
       while(n != NULL){
              cout << n->valor << " " << endl;
              n = n->proximo;
       }
}

int main(){
       int numero;
       cout << "Digite o tamanho da sua lista encadeada: " << endl;
       cin >> numero;
}