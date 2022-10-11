#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    string x;
    cin >> x;

    int largeEnglish = 0, smallEnglish = 0, number = 0;

    for(int i=0; i<x.length(); i++){
        if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'){
            number++;
        }

        if(isupper(x[i])){
            largeEnglish++;
        }

        if(islower(x[i])){
            smallEnglish++;
        }
    }

    if((x.length()>=5)&&(smallEnglish>=1) &&(largeEnglish>=1) && (number>=1)){
        cout << "Correct" << endl;
    }else{
        cout << "Too weak" << endl;
    }

    return 0;   
}