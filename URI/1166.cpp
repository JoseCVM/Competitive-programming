#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> varetas[51];
int res[51];
set<ll> sq;
int N;
ll f(){
    int bola, vareta;
    bola = 1;
    vareta = 0;
    for(int i = 0;i<51;i++) varetas[i].push_back(0);
    while(true){
        bool prox = true;
        for(int i = 1; i <= vareta; ++i) {
            if (sq.find((varetas[i].back() + bola)) != sq.end()){
                prox = false;
                varetas[i].push_back(bola);
            }
        }
        if(prox){
            res[vareta] = bola - 1;
            vareta++;
            varetas[vareta].push_back(bola);
            if (vareta == 51) break;
        }
        bola++;
    }   
}
int main(){
    for(int i = 0;i<100000;i++){
        sq.insert(i*i);
    }
    f();
    int tc;
    cin >> tc;
    while(tc--){
        for(int i = 0;i<51;i++)varetas[i].clear();
        cin >> N;
        cout << res[N] << '\n';
    }
    return 0;
}
