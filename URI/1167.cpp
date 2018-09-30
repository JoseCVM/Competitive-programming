#include <bits/stdc++.h>
using namespace std;
inline int mod(int a, int b) {int ret = a%b; return ret>=0? ret: ret+b; }
int main(){
    int n;
    while(cin >> n && n){
        vector<pair<string,int>> v;
        for(int i = 0;i<n;i++){
            string s;
            int k;
            cin.ignore();
            cin >> s >> k;
            v.push_back(make_pair(s,k));
        }
        int pos = 0;
        int prev = v[0].second;
        while(v.size() > 1){
            if(prev % 2 != 0){
        //        cout << prev << '+' << pos << '%' << v.size() <<  '=';
                pos = (pos+prev)%v.size();
        //        cout << pos << '\n';
            }else{
        //        cout << pos << '-' << prev << '%' << v.size() <<  '=';
                pos = mod(pos - (mod(prev,v.size())),v.size());
                if(pos < 0) pos += v.size();
            }
        //    cout << "cai em " << pos << '\n';
        //    cout << v[pos].first << " saiu\n";
            prev = v[pos].second;
            v.erase(v.begin() + pos);
            if(prev%2 != 0) pos--;
        }
        cout << "Vencedor(a): " << v[0].first << '\n';
    }
    return 0;
}
