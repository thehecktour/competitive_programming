#include <iostream>
#include <vector>
using namespace std;

int main(){

       //Inicializo as variveis e vetores
       int gabarito; 
       vector<int> ArrayGabarito, listaNotas;
       int contador, valorNota, resultado;
       int alunos, media, quantidadeAlunos, medida;
       int nota;

       //Incremento com zero
       contador = 0;
       valorNota = 0;
       quantidadeAlunos = 0;

       //Looping para pegar as informações do gabarito e colocar no vetor
       while (true){
              cout << "Digite o gabarito das 3 questões: " << endl;
              cout << "Opções de cada questão: 1-A 2-B 3-C " << endl;
              cin >> gabarito;
              ArrayGabarito.push_back(gabarito);
              contador+=1;  
              if(contador == 3){
                     break;
              }
       }


       cout << "Quantos alunos tem na classe? " << endl;
       cin >> alunos;

       //Looping para fazer mais verificações e colocar em outro vetor
       //Depois, rodo nesse vetor para fazer mais verificações
       while(true){
              for(int i=0; i<3; i++){
                     cout << "Digite a " << i+1 <<"º nota desse aluno: " << endl;
                     cin >> nota;
                     if(nota == ArrayGabarito[i]){
                            listaNotas.push_back(nota);
                            resultado +=1;
                     }
              }

              for(int i=0; i<3; i++){
                     media += listaNotas[i];
              }

              if(resultado>2){
                     quantidadeAlunos +=1;
              }

              valorNota+=1;
              if(valorNota == alunos){
                     break;
              }
       }
       
       //medida = (quantidadeAlunos/alunos);
       //Retorno das informações
       cout << "Quantidade de alunos aprovados é : " << quantidadeAlunos << endl;
       //cout << "Porcentagem de alunos aprovados é de :" << medida << endl;

}