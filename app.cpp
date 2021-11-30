#include <iostream>
using namespace std;

struct Node{
       public:
              int valor;
       Node *proximo;
};

void print(Node * n){
       while(n != NULL){
              cout << n->valor << " " << endl;
              n = n->proximo;
       }
}

int main(){

       Node * head = NULL;
       Node * second = NULL;
       Node * third = NULL;

       head = new Node();
       second = new Node();
       third = new Node();

       head->valor = 454;
       head->proximo = second;

       second->valor = 64;
       second->proximo = third;

       third->valor = 1;
       third->proximo = NULL;

       print(head);

}