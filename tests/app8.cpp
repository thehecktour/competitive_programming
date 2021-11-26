#include <iostream>
#include <map>
#include <vector>
using namespace std;

int BuscaBinaria(int tamanho, vector<int> vetor, int valorQuerendo){
    int inicio = 0;
    int final = tamanho-1;
    int meio;

    while(inicio<=final){
        meio = (inicio+final)/2;
        
        if(valorQuerendo< vetor[meio]){
            final = meio -1;
        }else if(valorQuerendo>vetor[meio]){
            inicio = meio+1;
        }else{
            return vetor[meio];
        }

    }return -1;
}
int main(){


    vector<int> primeiraListinha;
    map<char,int> mapinha;
    vector<char> novaListinha;
    int tamanho, valor;
    int auxiliar, valorAleatorio;

    cout << "Qual tamanho do seu array? " << endl;
    cin >> tamanho;

    for(int i=0; i<tamanho; i++){
        cout << "Digite o " << i+1 << "º item do seu array: " << endl;
        cin >> valor;
        primeiraListinha.push_back(valor);
    }

    for(int i=0; i<tamanho; i++){
        for(int j=i+1; j<tamanho; j++){
            if(primeiraListinha[j] < primeiraListinha[i]){
                auxiliar = primeiraListinha[j];
                primeiraListinha[j] = primeiraListinha[i];
                primeiraListinha[i] = auxiliar;
            }
        }
    }

    cout << "Diga o numero que você quer encontrar nesse array: " << endl;
    cin >> valorAleatorio;

    cout << BuscaBinaria(tamanho, primeiraListinha, valorAleatorio) << endl;

}