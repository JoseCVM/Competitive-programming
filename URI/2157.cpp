#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s, e;
        string st;
        stringstream ss;
        cin >> s >> e;
        for(int i = s;i<=e;i++) ss << i;
        st =  ss.str();
        cout << st ;
        reverse(st.begin(),st.end());
        cout << st << '\n';
    }
    return 0;
}
