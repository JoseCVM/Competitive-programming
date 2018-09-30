#include <bits/stdc++.h>
using namespace std;
#define MAX 30010
#define MAXQ 200020

struct elem{
    int tipo, v, ini, fim, id;
    elem(int a, int b, int c, int d, int e){tipo = a;v = b;ini = c;fim = d;id = e;}
    elem(){}
};
bool cmp(elem a, elem b){
    if(a.v == b.v)
        return a.tipo > b.tipo;
    else
        return a.v > b.v;
}

int bit[MAX], n;
vector<elem> arr;

int sum(int s){
    int res = 0;
    //s++;
    while(s>0){
        res += bit[s];
        s -= s & -s;    
    }
    return res;
}
int aa = 0;
void update(int s, int v){
    //s++;
    while(s <= n){
        bit[s]+=v;
        s += s & -s;
    }
}

int main(){    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1;i<=n;i++){
        int k;
        cin >> k;
        arr.push_back(elem(0,k,0,0,i));
    }
    int q;
    int resp[MAXQ] = {0};
    cin >> q;
    for(int i = 0;i<q;i++){
        int a,b,k;
        cin >> a >> b >> k;
        arr.push_back(elem(1,k,a,b,i));
    }
    sort(arr.begin(),arr.end(),cmp);
    
    for(int i = 0;i<arr.size();i++){
        elem j = arr[i];
        if(j.tipo == 0){
            update(j.id,1);
        }else{
            resp[j.id] = sum(j.fim) - sum(j.ini-1);
        }
    }
    
    for(int i = 0;i<q;i++) cout << resp[i] << '\n';
    return 0;
}