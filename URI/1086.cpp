#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> t;
ll testa(ll N, ll M,ll NT, ll lt){
    cout << N << " " << lt << '\n';
    if(N%lt != 0) return LLONG_MAX;
    ll tem = 0, usou = 0;
    ll alvo = N/lt;
//    cout << "Preciso de " << alvo << " tabuas somando " << M << '\n';
    for(ll i = 0;i<t.size();i++){
        if(t[i] == M){
            tem++;
        //    cout << "Tabua " << t[i] << " e um match, faltam "<< alvo-tem << "\n";
            usou++;
            if(tem == alvo) return usou;
        }
    }
    ll i = 0, j = t.size()-1;
    while(i < j){
        ll s = t[i]+t[j];
        if(s == M){
            //cout << "Tabuas " << t[i] << " e " << t[j] << " sao um match faltam "<< alvo-tem << "\n";
            tem++;
            usou += 2;
            i++;
            j--;
        }
        if(tem == alvo) return usou;
        if(s < M) i++;
        else if(s > M) j--;
    }
    return LLONG_MAX;
}
int main(){
    ll N, M;
    while(cin >> N >> M  && (M||N)){
        N *= 100;
        M *= 100;
        ll L, K;
        cin >> L >> K;
        t.clear();
        for(ll i = 0;i<K;i++){
            ll c;
            cin >> c;
            c *= 100;
            t.push_back(c);
        }
        sort(t.begin(),t.end());
        ll r1 = testa(N,M,K,L);
        ll r2 = testa(M,N,K,L);
        if(r1 == LLONG_MAX && r2 == LLONG_MAX) cout << "impossivel\n";
        else cout << min(r1,r2) << '\n';
    }
    return 0;
}
