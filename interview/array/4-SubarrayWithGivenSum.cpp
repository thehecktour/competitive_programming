#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    int tamanho;
    vector<int> listinha;
    map<int,int> mapinha;
    int valor;
    int somador, primeiraPosicao, ultimaPosicao;
    int s;

    ultimaPosicao = 0;
    primeiraPosicao = 0;
    somador = 0;

    cout << "Whats the size of the vector?" << endl;
    cin >> tamanho;

    for(int i=0; i<tamanho; i++){
        cout << "Whats the " << i+1 << "º item of your vector?" << endl;
        cin >> valor;
        listinha.push_back(valor);
    }

    cout << "Whats the S that you are looking at?" << endl;
    cin >> s;

    for(int i=0; i<tamanho; i++){
        if(mapinha.find(listinha[i]+listinha[i+1] == s)== mapinha.end()){
            ultimaPosicao = i;
        }
    }

    cout << ultimaPosicao << endl;

}