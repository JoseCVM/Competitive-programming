#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
typedef long long int ll;
typedef pair<ll,pair<ll,ll>> ppl;
vector<ppl> g;
ll p[MAX], r[MAX];
void make(ll a){
    p[a] = a;
    r[a] = 0;
}
ll find(ll a){
    return a == p[a] ? a : p[a] = find(p[a]);
}
void join(ll a, ll b){
    a = find(a);
    b = find(b);
    if(r[a] > r[b]){
        p[b] = a;
    }else{
        p[a] = p[b];
        if(r[b] == r[a]) r[b]++;
    }
}


int main(){
    int n;    
    cin >> n;    
    for(int i = 1;i<n;i++){
        make(i);
        int k;
        cin >> k;
        while(k--){
            int j, cj;
            cin >> j >> cj;
            g.push_back({cj,{i,j}});
        }
    }
    make(n);
    sort(g.begin(),g.end());
    ll res = 0;
    for(auto e : g){
        int u = find(e.second.first), v = find(e.second.second), c = e.first;
        if(u != v){
            join(u,v);
            res += c;
        }
    }
    set<ll> cont;
    for(int i = 1;i<=n;i++) cont.insert(find(i));
    cout << cont.size() << ' ' << res << '\n';
    return 0;
}
