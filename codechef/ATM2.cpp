    #include <bits/stdc++.h>
    #include <iostream>
    #include <algorithm>
    #define ll long long int
    #define pb push_back

    using namespace std;

    int main() {    

        int k;
        vector<int> l;
        cin >> k;

        while(k--){
            int a,b,c,d;
            l.clear();
            cin >> a >> b;

            while(a--){
                int f;
                cin >> f;
                l.pb(f);
            }
            string r = " ";
            for(int i=0; i<l.size(); i++){
                if(b>=l[i]){
                    b-=l[i];
                    r+="1";
                }else{
                    r+="0";
                }
            }

            cout << r << endl;

        }

        return 0;   
    }