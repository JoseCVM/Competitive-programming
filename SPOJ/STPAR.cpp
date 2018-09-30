#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    while(cin >> n && n){
        vector<int> v;
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        stack<int> st;
        int id = 0, nxt = 1;
        while(nxt != n+1){
            if(id > v.size()) break;
            st.push(v[id++]);
            while(st.top() != nxt){
                st.push(v[id++]);
                if(id> v.size()) break;
            }    
            if(id > v.size()) break;
            while(!st.empty() && st.top() == nxt){                
                st.pop();
                nxt++;      
            }      
        }
        while(!st.empty() && st.top() == nxt){                
                st.pop();
                nxt++;      
        } 
        if(st.empty()) cout <<"yes\n";
        else cout << "no\n";
        
    }
    return 0;
}