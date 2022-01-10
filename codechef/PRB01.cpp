#include <iostream>
using namespace std;

void isPrime(int n){
    
    if(n==1){
        cout << "no" << endl;
        return;
    }

    for(int i=2; i<n; i++){
        if(n%i==0){
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}

int main() {
	// your code goes here
	
	int tt;
	cin >> tt;
	
	while(tt--){
	    int n;
	    cin >> n;
	    
	    isPrime(n);
	    
	   
	    
	}
	return 0;
}
