#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
vector<int> g[MAX];
bool vis[MAX];
void dfs(int u){
    vis[u] = true;
    for(auto& v : g[u]) if(!vis[v]) dfs(v);
}
int main(){
    int n, m;
    cin >> n >> m;
    if(m != n-1){
        cout << "NO\n";
        return 0;
    }
    for(int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    for(int i = 1;i<=n;i++) if(!vis[i]){ cout << "NO\n"; return 0;}
    cout << "YES\n";
    return 0;
}