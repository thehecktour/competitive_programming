#include <iostream>
#include <vector>
using namespace std;

int buscaBinaria(int tamanho, int item, vector<int> vetor){
    int primeiro = 0;
    int final = tamanho-1;

    while(primeiro<=final){
        int meio = (primeiro+final)/2;
        if(item < vetor[meio]){
            final = meio-1;
        }else if(item > vetor[meio]){
            primeiro = meio+1;
        }else{
            return meio;
        }
    }return -1;
}

int main(){

    vector<int> listinha;
    cout << "Qual tamanho do seu array? " << endl;
    int tamanho;
    cin >> tamanho;

    for(int i=0; i<tamanho; i++){
        cout << "Digite o " << i+1 << "º item do seu array: " << endl;
        int valor;
        cin >> valor;
        listinha.push_back(valor);
    }

    for(int i=0; i<tamanho; i++){
        for(int j=1; j<i; j++){
            int auxiliar;
            if(listinha[i] < listinha[j]){
                auxiliar = listinha[i];
                listinha[i] = listinha[j];
                listinha[j] = auxiliar;
            }
        }
    }

    cout << "Digite o valor que você está procurando: " << endl;
    int numero;
    cin >> numero;

    cout << buscaBinaria(tamanho, numero, listinha) << endl;
}