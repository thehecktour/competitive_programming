#include <iostream>
using namespace std;

struct Node{
    public:
        int valor;
        Node * proximo;
};

void printLista(Node * head){
    while(head != NULL){
        cout << head->valor << endl;
        head = head->proximo;
    }
}

void push(Node ** head , int value){
    
    Node * novoNodo = new Node();

    novoNodo->valor = value;
    novoNodo->proximo = *head;

    *head = novoNodo;
}

int main(){
    struct Node * head = NULL;

    push(&head, 10);
    printLista(head);
}