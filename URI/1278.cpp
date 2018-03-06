#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
bool cmp(char a, char b) { return (a == ' ') && (b == ' '); }

int main(){
    int n;
    bool fst = true;
    while(cin >> n && n){
        if(!fst) cout << '\n';
        if(fst) fst = false;
            
        cin.ignore();
        string s[n];
        int t = -1;
        for(int i = 0;i<n;i++){
            getline(cin,s[i]);            
            string::iterator it = unique(s[i].begin(), s[i].end(), cmp);
            s[i].erase(it, s[i].end());             
            while(s[i][0] == ' ') s[i].erase(0,1);            
            while(s[i][s[i].size() - 1] == ' ') s[i].erase(s[i].size() - 1);
            int k = s[i].size();
            t = max(t,k);
        }
        for(int i = 0;i<n;i++){
            int k = t - s[i].size();
            //cout << '\n' << t << '-' << s[i].size() << '\n';
            for(int j = 0;j<k;j++) cout << ' ';
            cout << s[i] << '\n';
        }
    }
    return 0;
}
