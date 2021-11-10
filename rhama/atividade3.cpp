#include <iostream>
#include <vector>
using namespace std;

int main(){

       int questao, alunos, respostasQuestoes, numeroQuestoes;
       vector<int> listinhaRespostas;

       cout << "Quantas questões tem sua prova? " << endl;
       cin>> numeroQuestoes;

       for(int i=0; i<=numeroQuestoes; i++){
              cout << "Digite a resposta correta da " << i+1 << "º questão: " << endl;
              cin >> questao;
              listinhaRespostas.push_back(questao);
       }

}