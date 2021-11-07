#include <iostream>
#include <cstdlib>
using namespace std;


#define SIZE 10

class stack{
       int *arr;
       int top;
       int capacity;

public:

       stack(int size=SIZE);
       ~stack();

       void push(int);
       int pop();
       int peek();
       int size();  
       bool isEmpty();
       bool isFull();

};

stack::stack(int size){
       arr = new int[size];
       capacity = size;
       top = -1;
}

stack::~stack(){
       delete[] arr;
}



int main(){

              

}