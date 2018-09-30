#include <bits/stdc++.h>
#define MAX 10010
bool prime[MAX];
using namespace std;
unordered_set<string> fd;
void sieve(){
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2;i*i <= 10000;i++)
        if(prime[i])
            for(int j = i+i;j<=10000;j+=i) prime[j] = false;
    for(int i = 1000;i<10000;i++) if(prime[i]) fd.insert(to_string(i));
}

int main(){
    sieve();
    int TC;
    cin >> TC;
    while(TC--){
        int s1, t1;
        string s, t;
        cin >> s1 >> t1;
        s = to_string(s1);
        t = to_string(t1);
        unordered_map<string,int> d;
        queue<string> q;
        unordered_map<string,bool> vis;
        q.push(s);
        while(!q.empty()){
            string u = q.front();
            q.pop();
            if(u == t) break;
            for(int i = 0;i<4;i++){
                for(char j = '0';j<='9';j++){
                    string v = u;
                    if(v[i] == j) continue; 
                    v[i] = j;                    
                    if(vis[v]) continue;                   
                    if(fd.find(v) != fd.end()){
                       // cout << "Estou em "<< u << " vou pra " << v << '\n';
                        q.push(v);
                        vis[v] = true;
                        d[v] = d[u] + 1;
                    }
                }
            }
        }
        if(d[t] == 0 && s != t) cout << "Impossible\n";
        else cout << d[t] << '\n';    
    }
    return 0;
}