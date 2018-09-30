#include <bits/stdc++.h>
using namespace std;
#define MAX 3000050
#define MXQ 2000050
#define MXN 1000050
const int sqr = 174;
struct query{
    int l,r,id;
    bool operator <(const query& rhs) const{if(l/sqr != rhs.l/sqr) return l/sqr < rhs.l/sqr; return r < rhs.r;}
};
    
int v[MAX], cnt[MXN];
query q[MXQ];
int main(){
    int n, qr;
    cin >> n;
    for(int i = 0;i<n;i++) cin >> v[i];
    cin >> qr;
    for(int i = 0;i<qr;i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--;
        q[i].r--;
        q[i].id = i;
    }
    sort(q,q+qr);
    int res = 0, cl = 0, cr = 0;
    int rs[MXQ];
    for(int i = 0;i<qr;i++){
        int l = q[i].l, r = q[i].r;
        while(cl<l){    
            cnt[v[cl]]--;
            if(cnt[v[cl]] == 0) res--;
            cl++;
        }
        while(cl>l){
            cnt[v[cl-1]]++;
            if(cnt[v[cl-1]] == 1) res++;
            cl--;           
        }
        while(cr<=r){
            cnt[v[cr]]++;
            if(cnt[v[cr]] == 1) res++;
            cr++;
        }
        while(cr>r+1){
            cnt[v[cr-1]]--;
            if(cnt[v[cr-1]] == 0) res--;
            cr--;
        }
        rs[q[i].id] = res;
    }
    for(int i = 0;i<qr;i++) cout << rs[i] << '\n';
}