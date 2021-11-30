#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a,b,c, auxiliar;
    vector<int> listinha, listinha2;

    cin >> a >> b >> c;
    listinha.push_back(a);
    listinha.push_back(b);
    listinha.push_back(c);

    listinha2 = listinha;

    for(int i=0; i<listinha.size(); i++){
        for(int j=0; j<listinha.size(); j++){
            if(listinha[i] < listinha[j]){
                auxiliar = listinha[i];
                listinha[i] = listinha[j];
                listinha[j] = auxiliar;
            }
        }
    }

    for(int i=0; i<listinha.size(); i++){
        cout << listinha[i];
        cout << endl;
    }

    cout << endl;

    for(int i=0; i<listinha2.size(); i++){
        cout << listinha2[i];
        cout << endl;
    }



}