#include <iostream>
using namespace std;

int main(){

       int h,z,l;

       cin >> h >> z >> l;

       if(h>z && z>l){
              cout << "zezinho" << endl;
       }else if(h>z & l>z){
              cout << "luisinho" << endl;
       }else if(z>h && h>l){
              cout << "huguinho" << endl;
       }else if(l>z && z>h){
              cout << "zezinho" << endl;
       }else if(z>l && l>h){
              cout << "luisinho" << endl;
       }else if(l>h && h>z){
              cout << "huguinho" << endl;
       }

}