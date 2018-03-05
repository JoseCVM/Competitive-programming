#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        ull r = 1;
        int n;
        string s;
        
        cin >> s;
        n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'S' || s[i] == 'O' ||  s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 's' || s[i] == 'o') r*=3;
            else r*=2;       
        }
        cout << r << '\n';
        
    }

}
