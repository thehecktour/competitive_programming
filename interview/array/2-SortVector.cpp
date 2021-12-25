// We are gonna use the bubble sort algorithm to sort this vector
//Lets do this

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> myVector;
    int sizeVector;

    cout << "Whats the size of your vector?" << endl;
    cin >> sizeVector;


    //We are just asking the size of the vector
    //After this, we are gonna ask the numbers and push inside the vector

    for(int i=0; i<sizeVector; i++){
        cout << i+1 << "º number of your vector is: " << endl;
        int number;
        cin >> number;
        myVector.push_back(number);
    }


    //Now, we have a vector with a lot of random numbers that we push it
    //Lets use the bubble sort to sort the vector

    for(int i=0; i<sizeVector; i++){
        for(int j=i+1; j<sizeVector; j++){
            if(myVector[i] > myVector[j]){
                int aux;
                aux = myVector[i];
                myVector[i] = myVector[j];
                myVector[j] = aux;
            }
        }
    }

    //Now, lets looping inside the vector to see if the sort worked

    for(int i=0; i<sizeVector; i++){
        cout << i+1 << "º number of your vector: " << myVector[i] << endl;
    }

    //Lets compile and run the coding
    
    //We make the bubble sort from the biggest to the minimium (is this the word?!)
    //Lets make the oppositive

    //I'm gonna compile and run the coding again
    // Now, works!

    //Just to explain, to do this, I changed the logic from the bubble sort
    // I was comparing the numbers and, If I had a number biggest than another one, I would NOT make the bubble sort move
    // Now, I'm making the move


    // The "move" is to change the position of the numbers. 
    // Then, I can have the numbers in the right position. To minimium to maximium (I think the english is right!)


    // If you like this video, see you on the next you


    //Subscribe!!!

}