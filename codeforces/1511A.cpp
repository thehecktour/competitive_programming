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
        int f;
        cin >> f;

        int upVote = 0, downVote = 0, restVote = 0;

        while(f--){
            int a;
            cin >> a;

            if(a==1){
                upVote++;
            }else if(a==2){
                downVote++;
            }else{
                restVote++;
            }
        }

        if((upVote>=downVote)||(downVote>upVote)){
            cout << upVote+restVote << endl;
        }else{
            cout << restVote << endl;
        }
    

    }

    return 0;   
}