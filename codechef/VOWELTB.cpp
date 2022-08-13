#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main() {    

    char k;

    cin >> k;

    if(tolower(k)=='a'||tolower(k)=='e'||tolower(k)=='i'||tolower(k)=='o'||tolower(k)=='u'){
        cout << "Vowel" << endl;
    }else{
        cout << "Consonant" << endl;
    }
    return 0;   
}