#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double note1, note2, note3, note4;
    double average;

    cin >> note1 >> note2 >> note3 >> note4;

    average = ((note1*2)+ (note2*3)+ (note3*4) + (note4))/10;

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if(average>=7.0){
        cout << "Aluno aprovado." << endl;
    }else if(average<5.0){
        cout <<"Aluno reprovado." << endl;
    }else if(average>=5.0 && average <=6.9){
        cout << fixed << setprecision(1);
        cout <<"Aluno em exame." << endl;
        double newExame;
        cin >> newExame;
        cout << "Nota do exame: " << newExame << endl;
        double newAverage;
        newAverage = (newExame+average)/2;
        if(newAverage>=5.0){
            cout << fixed << setprecision(1);
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << newAverage << endl;
        }else if(newAverage <=4.9){
            cout << fixed << setprecision(1);
            cout <<"Aluno reprovado." << endl;
            cout << "Media final: " << newAverage << endl;
        }
    }

}