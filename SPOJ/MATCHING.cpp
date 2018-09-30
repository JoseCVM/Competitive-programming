#include <bits/stdc++.h>
using namespace std;
int N,M,P;
#define MAX 100010
#define INF 0x3f3f3f3f
vector<int> g[MAX];
int pb[MAX], pv[MAX], d[MAX];

bool bfs(){
    queue<int> q;
    for(int i = 1;i<=N;i++){
        if(pv[i] == 0){
            d[i] = 0;
            q.push(i);
        }else{
            d[i] = INF;
        }
    }
    d[0] = INF;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(d[u] < d[0]){
            for(auto& it : g[u]){
                if(d[pv[it]] == INF){
					d[pv[it]] = d[u] + 1;
					q.push(pv[it]);
				}
            }
        }
    }
    return d[0] != INF;
}
bool dfs(int u){
    if(u != 0){
        for(auto& it : g[u]){
            if(d[pv[it]] == d[u]+1){
                if(dfs(pv[it]) == true){
                    pv[it] = u;
                    pv[u] = it;
                    return true;
                }
            }
        }
        d[u] = INF;
        return false;
    }
    return true;
}
int match(){
    memset(pb,0,sizeof(pb));
    memset(pv,0,sizeof(pv));
    memset(d,0,sizeof(d));
    int res = 0;
    while(bfs()){
            for(int i = 1;i<=N;i++){
                if(pv[i] == 0 && dfs(i)) res++;
            }
    }
    return res;
}
int main(){
    cin >> N >> M >> P;
    for(int i = 0;i<P;i++){
        int A, B;
        cin >> A >> B;
        B += N + 2;
        g[A].push_back(B);
    }
    cout << match() << '\n';
    return 0;
}
