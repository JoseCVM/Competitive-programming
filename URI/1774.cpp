#include <bits/stdc++.h>
using namespace std;

vector<int> p;
int dsu_get(int v){
    return (v == p[v])? v : (p[v] = dsu_get(p[v])); 
}
void dsu_unite(int a, int b){
    a = dsu_get(a);
    b = dsu_get(b);
    if(rand() & 1)
        swap(a,b);
    if(a != b)
        p[a] = b;
        
}
int main(){
    int m, n;
    while(cin >> m >> n &&  m && n){
        vector<pair<int,pair<int,int>>> g;
        for(int i = 0;i<n;i++){
            int u, v, w;
            cin >> u >> v >> w;
            u--;
            v--;
            g.push_back(make_pair(w,make_pair(u,v)));
            g.push_back(make_pair(w,make_pair(v,u)));
        }
        sort(g.begin(),g.end());
        p.clear();
        p.resize(m);
        vector<pair<int,int>> res;
        long int cost = 0;
        for(int i = 0;i<m;i++){
             p[i] = i;
        //    cout << "p " << i << " = " << i << '\n';
        }
        for(int i = 0;i<g.size();i++){
            int a = g[i].second.first, b = g[i].second.second, l = g[i].first;
        //   cout << a << " -> " << b << '\n';
            if(dsu_get(a) != dsu_get(b)){
                cost+=l;
                res.push_back(g[i].second);
                dsu_unite(a,b);
            }
        }
        //cout << "tree\n";
        //for(int i = 0;i<res.size();i++){
        //   cout << res[i].first << " -> " << res[i].second << '\n';
        //}
        cout << cost << '\n';
    }
}
