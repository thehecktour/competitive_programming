#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    int k;

    cin >> k;

    while(k--){
        int a,b,c,d,e;

        cin >> a >> b >> c >> d >> e;

        int f = (a+b+c+d+e);

        if(f==0){
            cout << "Beginner" << endl;
        }else if(f==1){
            cout << "Junior Developer" << endl;
        }else if(f==2){
            cout << "Middle Developer" << endl;
        }else if(f==3){
            cout << "Senior Developer" << endl;
        }else if(f==4){
            cout << "Hacker" << endl;
        }else if(f==5){
            cout << "Jeff Dean" << endl;
        }

    }
    return 0;   
}