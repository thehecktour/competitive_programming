#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int x;
    int number;
    int result;
    int tamanho;
    int listinha[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> x;

    tamanho = sizeof(listinha);

    for (number=0; number < 7; number++){
        result = (x/listinha[number]);
        cout << result << endl;
        result -= (result - );
    }

}