#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> listinha;
    int totalNotas, quantidadeNotas, divisao;

    cin >> totalNotas;

    for(int i=0; i<1; i++){
        listinha.push_back(100);
        listinha.push_back(50);
        listinha.push_back(20);
        listinha.push_back(10);
        listinha.push_back(5);
        listinha.push_back(2);
        listinha.push_back(1);
    }

    cout << totalNotas << endl;
    for(int i=0; i<7; i++){
        divisao = totalNotas/listinha[i];
        cout << divisao << " nota(s) de R$ " << listinha[i] << ",00" << endl;
        totalNotas = totalNotas - (divisao*listinha[i]);
    }

}