#include <iostream>
#include <vector>
using namespace std;

int main(){

       //Inicializo as variveis e 1 vetor
       int candidato1, candidato2, candidato3, candidato4, diferente, total, voto;
       vector<int> listaCandidatos;
       int auxiliar;

       //Incremento todas com 0 pra não bugar nos proximos incrementos
       candidato1 = 0;
       candidato2 = 0;
       candidato3 = 0;
       candidato4 = 0;
       diferente = 0;

       //Looping para pedir os votos da pessoa
       while(true){
              cout << "Em qual candidato você deseja votar? " << endl;
              cout << "Aperte 13 - Para Candidato 1" << endl;
              cout << "Aperte 17 - Para Candidato 2" << endl;
              cout << "Aperte 69 - Para Candidato 3" << endl;
              cout << "Aperte 99 - Para Candidato 4" << endl;

              cin >> voto;
              if(voto == 13){
                     candidato1 +=1;
              }else if(voto ==17){
                     candidato2+=1;
              }else if(voto == 69){
                     candidato3+=1;
              }else if(voto == 99){
                     candidato4+=1;
                     break;
              }else{
                     diferente+=1;
              }
       }

       //Adicione os votos num Vetor
       listaCandidatos.push_back(candidato1);
       listaCandidatos.push_back(candidato2);
       listaCandidatos.push_back(candidato3);
       listaCandidatos.push_back(candidato4);
       listaCandidatos.push_back(diferente);


       //Usando algoritimo de ordenação Bubble Sort para deixar o array no formato decrescente
       for(int i=0; i<5; i++){
              for(int j=0; j<i; j++){
                     if(listaCandidatos[i]>listaCandidatos[j]){
                            auxiliar = listaCandidatos[i];
                            listaCandidatos[i] = listaCandidatos[j];
                            listaCandidatos[j] = auxiliar;
                     }
              }
       }

       cout << "O candidato número 1 recebeu " << candidato1 << " votos!" << endl;
       cout << "O candidato número 2 recebeu " << candidato2 << " votos!" << endl;
       cout << "O candidato número 3 recebeu " << candidato3 << " votos!" << endl;
       cout << "O candidato número 4 recebeu " << candidato4 << " votos!" << endl;
       cout << "O total de votos nulos foram igual a: " << diferente << " votos!" << endl;
       
       //Correndo dentro do array para verificar os votos
       
       for(int i=0; i<5; i++){
              if(listaCandidatos[0] == candidato1){
                     cout << "Candidato vencedor foi o numero 13 com um total de " << listaCandidatos[0] << " votos!" << endl;
                     break; 
              }else if(listaCandidatos[0] == candidato2){
                     cout << "Candidato vencedor foi o numero 17 com um total de " << listaCandidatos[0] << " votos!" << endl;
                     break; 
              }else if(listaCandidatos[0] == candidato3){
                     cout << "Candidato vencedor foi o numero 69 com um total de " << listaCandidatos[0] << " votos!" << endl;
                     break; 
              }else if(listaCandidatos[0] == candidato4){
                     cout << "Candidato vencedor foi o numero 99 com um total de " << listaCandidatos[0] << " votos!" << endl;
                     break; 
              }else if(listaCandidatos[0] == diferente){
                     cout << "Candidato vencedor foi o NULO com um total de " << listaCandidatos[0] << " votos!" << endl;
                     cout << "Se a maioria votou nele, ninguém deveria vencer! :)" << endl;
                     break; 
              }
       }
}