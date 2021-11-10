#include <iostream>
#include <vector>
using namespace std;

int main(){

       int gabarito;
       vector<int> ArrayGabarito, listaNotas;
       int contador, valorNota, resultado;
       int alunos, media, quantidadeAlunos, medida;
       int nota1;

       contador = 0;
       valorNota = 0;
       quantidadeAlunos = 0;

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

       while(true){
              for(int i=0; i<3; i++){
                     cout << "Digite a " << i+1 <<"º nota desse aluno: " << endl;
                     cin >> nota1;
                     if(nota1 == ArrayGabarito[i]){
                            listaNotas.push_back(nota1);
                            resultado +=1;
                     }
              }

              for(int i=0; i<3; i++){
                     media += listaNotas[i];
              }

              if(resultado>3){
                     quantidadeAlunos +=1;
              }

              valorNota+=1;
              if(valorNota == alunos){
                     break;
              }
       }
       
       medida = (quantidadeAlunos/alunos);

       cout << "Quantidade de alunos aprovados é : " << quantidadeAlunos << endl;
       cout << "Porcentagem de alunos aprovados é de :" << medida << endl;

}