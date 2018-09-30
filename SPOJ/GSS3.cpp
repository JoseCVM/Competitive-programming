#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
typedef long long int ll;
 
struct node{
    int ls,rs,ms,s;
    node(){ls = rs = ms = s = 0;}
    node(int a, int b, int c,int d){ ls = a;rs = b;ms = c;s = d;}
};
int arr[MAX];
node tree[4*MAX];
void update(int v, int ss, int se, int x, int id){
	if(ss == se){
		tree[v] = node(x,x,x,x);
		return;
	}
	int m = (ss+se)/2;
	if(id <= m){
		update(2*v,ss,m,x,id);
	}else{
		update(2*v+1,m+1,se,x,id);
	}
	node l = tree[2*v], r = tree[2*v+1];
    tree[v].ls = max(l.ls, l.s +r.ls);
    tree[v].rs = max(r.rs, r.s +l.rs);
    tree[v].ms = max(l.ms, max(r.ms,l.rs +r.ls));
    tree[v].s = l.s + r.s;
    
}
void make(int v, int ss, int se){
    if(ss > se) return;
    if(ss == se){
        tree[v] = node(arr[ss],arr[ss],arr[ss],arr[ss]);
        return;
    }
    int m = (ss+se)/2;
    make(2*v,ss,m);
    make(2*v+1,m+1,se);
    node l = tree[2*v], r = tree[2*v+1];
    tree[v] = node(max(l.ls,l.s + r.ls ),max(r.rs,r.s + l.rs ),max(l.ms, max(r.ms, r.ls + l.rs )),l.s + r.s);
}
node query(int ss, int se, int l, int r, int v){
    if(ss == l && se == r) return tree[v];
       
    int mid = (ss+se)/2;
    if(r <= mid) return query(ss, mid, l, r,v*2);
    if(l > mid) return query(mid+1, se, l, r,v*2+1); 
    node le = query(ss, mid, l, mid,v*2);
    node ri = query(mid+1, se, mid+1, r,v*2+1);
    return node(max(le.ls,le.s + ri.ls ),max(ri.rs,ri.s + le.rs ),max(le.ms, max(ri.ms, ri.ls + le.rs )),le.s + ri.s);
}
 
int main(){
    int n;
    scanf("%d",&n);
    scanf("%d",&arr[0]);
    for(int i = 1;i<n;i++){        
        scanf("%d",&arr[i]);
    }
    make(1,0,n-1);
    int m;
    scanf("%d",&m);
    while(m--){
        int op, x, y;
        scanf("%d %d %d",&op,&x,&y);
        if(op == 1)
    		printf("%d\n",query(0,n-1,x-1,y-1,1).ms);
     	else
     		update(1,0,n-1,y,x-1);
    }
    return 0;
} 