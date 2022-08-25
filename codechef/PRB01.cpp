#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int checador(ll numero){
    int contador = 0;
    for(ll i=1; i<=numero; i++){
        if(numero%i==0){
            contador++;
        }
        
        if(contador>=3){
            break;
        }
    }  
    
    if(contador==2){
        return true;
    }else{
        return false;
    }
};

int main() {
	// your code goes here
	
	int k;
	
	cin >> k;
	
	while(k--){
	    ll f;
	    cin >> f;
	    if(checador(f)==false){
	        cout << "no" << endl;
	    }else{
	        cout << "yes" << endl;
	    }
	}
	return 0;
}
