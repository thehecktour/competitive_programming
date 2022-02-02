#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <string.h>
#include <string>
#include <cstring>
#include <queue>

using namespace std;

// 1 questão String - URI

int main(){

    int k;
    vector<long long int> listinha;
    long long int w;

    cin >> k;

    while(k--){
        long long int f;
        cin >> f;

        while(f--){
            long long int d;
            cin >> d;
            listinha.push_back(d);
        }

        sort(listinha.begin(), listinha.end());

        for(long long int i=0; i<listinha.size(); i+=2){
            if(listinha[i] != listinha[i+1]){
                w = listinha[i];
                break;
            }
        }

        cout << w << endl;
    }
    
    return 0;
}       