//Whats upp, in this video we are gonna create a linked list
//And where are gonna add some data on the beginning of this list
//Lets do this

#include <iostream>
using namespace std;

//first it all, lets create the structure, its where we can modelling the linked list

//Linked list has a lot of Nodes (or no one) and each Node has a data and a link for the next one
struct Node{
    public:
        int data;
        Node * next;
};

//now, lets create a function to return the datas from this linked list
//Right here, we take the head of the linked list and we are gonna return all the data while the datas are not null

//If the data is NULL, it means that we dont have data to return anymore
//and the head will receive the next node, like I put on the line 25

void printList(Node * head){
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

// Now, lets create a function to add some data on the beginning of this linked list
// Right here, we create a pointer to connect to the pointer of ours

//Our pointer that I'm talking about is the "head" that we created
//so, to connect a pointer with another pointer, we use 2 "**" 

//I'm gonna create another node, give a data and connect this Node with our node "Head"
//Very simple

void push(Node ** head, int value){
    Node * newNode = new Node();

    // Remember, the "head" that I'm passing on the parameter is a connection with our "head" right there on the "main function"
    //The head on the line 45 is the connection
    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}



int main(){
    // Now, I'm creating some nodes by myself just to show up my linked list
    //All of them I create as NULL just to get started

    //Now im gonna add some data inside them

    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    //But before, I have to inicializate them

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 43;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    // OK, now I have data and next in all of the nodes that I created
    // Lets print them
    //Lets pass the function and add some value right now
    push(&head, 24);
    printList(head);

    //Lets compile and run the coding
    //We received the value "24" on the beginning of this linked list

    //Do you like it? Subscribe on this channel

    //See you tomorrow!!!

}