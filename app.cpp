#include <iostream>
using namespace std;

struct Node{
    public:
        int valor;
        Node * proximo;
};

void printLista(Node * l){
    while(l!=NULL){
        cout << l->valor << endl;
        l = l->proximo;
    }
}

void push(Node ** top, int value){
    
    Node * newNode = new Node();

    newNode->valor = value;
    newNode->proximo = *top;

    *top = newNode;
}

int main(){

    Node * head = NULL;

    push(&head, 10);
    printLista(head);

}