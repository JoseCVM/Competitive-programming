#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
typedef long long int ll;

struct node{
    int ls,rs,ms;
    node(){ls = rs = ms = 0;}
    node(int ss, int se, int c){ ls = ss;rs = se;ms = c;}
};
int arr[MAX], sums[MAX];
node tree[4*MAX];
void make(int v, int ss, int se){
    if(ss > se) return;
    if(ss == se){
        tree[v] = node(arr[ss],arr[ss],arr[ss]);
        return;
    }
    int m = (ss+se)/2;
    make(2*v,ss,m);
    make(2*v+1,m+1,se);
    node l = tree[2*v], r = tree[2*v+1];
    tree[v].ls = max(l.ls, sums[m] - sums[ss-1] +r.ls);
    tree[v].rs = max(r.rs, sums[se] - sums[m] +l.rs);
    tree[v].ms = max(l.ms, max(r.ms,l.rs +r.ls));
}
node query(int ss, int se, int l, int r, int v){
    if(ss == l && se == r) return tree[v];
       
    int mid = (ss+se)/2;
    if(r <= mid) return query(ss, mid, l, r,v*2);
    if(l > mid) return query(mid+1, se, l, r,v*2+1); 
    node esq = query(ss, mid, l, mid,v*2);
    node dir = query(mid+1, se, mid+1, r,v*2+1);
    return node(max(esq.ls, sums[mid] - sums[l-1] +dir.ls), max(dir.rs, sums[se] - sums[mid] +esq.rs), max(esq.ms, max(dir.ms, esq.rs +dir.ls)));
}

int main(){
    int n;
    scanf("%d",&n);
    scanf("%d",&arr[0]);
    sums[0] = arr[0];
    for(int i = 1;i<n;i++){        
        scanf("%d",&arr[i]);
        sums[i] = sums[i-1] +arr[i];
    }
    make(1,0,n-1);
    int m;
    scanf("%d",&m);
    while(m--){
        int x, y;
        scanf("%d %d",&x,&y);
        x--;
        y--;
        printf("%d\n",query(0,n-1,x,y,1).ms);
    }
    return 0;
}