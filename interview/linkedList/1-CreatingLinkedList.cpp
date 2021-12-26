//In this ASMR, lets create a very basic linked list
// SO, lets go then

#include <iostream>
using namespace std;

//first it all, lets create a structure 
//This structure will be used for create the nodes and values inside the linked list

//Remember, all linked list has a value (or its NULL) and a connection with another node (or NULL)

struct Node{
    public:
        int value;
        Node*next;
};


int main(){

    //Lets inicializate the nodes
    //I'm gonna create 3 nodes

    Node * first = NULL;
    Node * second = NULL;
    Node * last = NULL;

    // I'm inicializating usig NULL values just to get started
    // Now, lets give values to each node

    first = new Node();
    second = new Node();
    last = new Node();

    //And, lets connect them

    first->value = 1;
    first->next = second;

    second->value = 2;
    second->next = last;

    last->value = 3;
    last->next = NULL;

    //Now, we have a linked list with 3 nodes (values: 1,2 and 3 - Could be anything)
    //Lets see this linked list on the terminal
    //Im gonna create a looping to do this

    while(first!=NULL){
        cout << first->value << endl;
        first = first->next;
    }

    //Lets compile and run the coding

    //I got an error right here, just because I forgot to inicializate the nodes by totally

    //Now, we have the value of our linked list done!

    //I hope you like this ASMR. If so, subscribe on this channel!


    //Se yaa!!!

}