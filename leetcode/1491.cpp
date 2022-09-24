#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    
    double menor = 0, maior = 0;
    vector<int> salary = {100,2000,3000,5000,4000};
    
    sort(salary.begin(), salary.end());
    
    menor = salary[0];
    maior = salary[salary.size()-1];
    
    double total = 0, contador = 0;
    
    for(int i=0; i<salary.size(); i++){
        total+=salary[i];
        contador++;
    }
    
    total = total-menor;
    total = total-maior;
    
    return total/(contador-2);
 
}