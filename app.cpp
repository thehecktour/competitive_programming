#include <iostream>
#include <vector>
using namespace std;

struct Node{
       public:
              int valor;
       Node * proximo;
};

void mostrarValor(Node * n){
       while(n!=NULL){
              cout << n->valor << " " << endl;
              n = n->proximo;
       }
       
}

int main(){
       vector<int> listinha;
       cout  << "Digite o tamanho da sua lista encadeada: " << endl;
       int size;
       cin >> size;

       for(int i=0; i<size; i++){
              cout << "Digite o " << i+1 << "º item da sua lista: " << endl;
              int item;
              cin >> item;

              Node * valorPonteiro = NULL;

              valorPonteiro = new Node();

              valorPonteiro->valor = item;
              valorPonteiro->proximo = NULL;

              listinha.push_back(valorPonteiro->valor);

              mostrarValor(valorPonteiro);
       }
       

       for(int i=0; i<size; i++){
              cout << listinha[i] << endl;
       }
}