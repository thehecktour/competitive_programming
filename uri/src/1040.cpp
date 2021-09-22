#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    double n1,n2,n3,n4;
    double media;
    double n_exame;
    double new_media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10.0;

    if (media >= 7.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }else if(media <5.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }else if(media <=6.9 && media >=5.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> n_exame;
        cout << "Nota do exame: " << n_exame << endl;
        new_media = (media+n_exame)/2;
        if (new_media >= 5.0){
            cout << fixed << setprecision(1);
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << new_media << endl;
        }else if(new_media <= 4.9){
            cout << fixed << setprecision(1);
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << new_media << endl;
        }
    }

}