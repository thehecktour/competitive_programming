#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){

    int a,b,c;
    int maiorAB;
    int maiorBC;
    int maiorAC;
    vector<int> listinha = {};

    cin >> a >> b >> c ;

    maiorAB = (a+b+abs(a-b))/2;
    maiorBC = (b+c+abs(b-c))/2;
    maiorAC = (a+c+abs(a-c))/2;

}