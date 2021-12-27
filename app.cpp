#include <iostream>
using namespace std;

struct Node{
    public:
        int valor;
        Node * proximo;
};

void push(Node ** head, int value){
    struct Node * newNode = new Node();

    newNode->valor = value;
    newNode->proximo = (*head);

    *head = newNode;
}


int main(){

    Node * head = NULL;

    push(&head,10);

    while(head!=NULL){
        cout << head->valor << endl;
        head = head->proximo;
    }

}