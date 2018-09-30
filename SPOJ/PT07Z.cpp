#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
vector<int> g[MAX];
int x, dia, maxcnt;
bool vis[MAX];
void dfs(int u, int cnt){
    vis[u] = true;
    cnt++;
    for(auto& v : g[u]){
        if(vis[v]) continue;
        if(cnt >= maxcnt){
            maxcnt = cnt;
            x = v;
        }
        dfs(v,cnt);
    }     
}


int main(){
    int n;
    cin >> n;
    n--;

    for(int i = 0;i<n;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    maxcnt = -1;    
    memset(vis,false,sizeof(vis));
    dfs(1,0);
    memset(vis,false,sizeof(vis));
    dfs(x,0);
    cout << maxcnt << '\n';
    return 0;
}