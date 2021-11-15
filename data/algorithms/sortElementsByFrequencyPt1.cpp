#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> listinha;
    int tamanho, valor, auxiliar;

    cout << "Qual tamanho do seu array? " << endl;
    cin >> tamanho;

    for(int i=0; i<tamanho; i++){
        cout <<"Digite o " << i+ << "º elemento do seu array: " << endl;
        cin >> valor;
        listinha.push_back(valor);
    }

    for(int i=0; i<tamanho; i++){
        for(int j=0; j<(tamanho-1); j++){
                if(listinha[i] < listinha[j]){
                    
                }
        }
    }

}