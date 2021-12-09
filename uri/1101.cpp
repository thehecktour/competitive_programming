#include <iostream>
using namespace std;

int main(){

	int a,b;
	int sum;

	sum = 0;

	while(true){
		cin >> a >> b;

		if(a<=0 || b<=0){
			break;
		}

		if(a>b){
			sum =0;
			for(int i=b; i<=a; i++){
				sum += i;
				cout << i << " ";
			}
			cout << "Sum=" << sum;
		}else if(b>a){
			sum =0;
			for(int i=a; i<=b; i++){
				sum += i;
				cout << i << " ";
			}
			cout << "Sum=" << sum;
		}

		cout << endl;


	}

	return 0;

}