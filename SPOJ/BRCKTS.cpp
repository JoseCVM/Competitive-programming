#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;
#define MAX 50000
int arr[MAX];
struct node{
	int min, sum;
};
node tree[4*MAX];
void make(int v,int ss, int se){
	if(ss == se){
		tree[v].sum = tree[v].min = arr[ss];
		return;
	}
	int m = (ss+se)/2;
	make(2*v+1,ss,m);
	make(2*v+2,m+1,se);
	tree[v].sum = tree[2*v+1].sum+tree[2*v+2].sum;
	tree[v].min = min(tree[2*v+1].min,tree[2*v+1].sum+tree[2*v+2].min);
}
void update(int v,int ss, int se, int id){
	if(ss == se){
		tree[v].sum = tree[v].min = -tree[v].sum;
		return;
	}
	int m = (ss+se)/2;
	if(id<=m) update(2*v+1,ss,m,id);
	else update(2*v+2,m+1,se,id);
	tree[v].sum = tree[2*v+1].sum+tree[2*v+2].sum;
	tree[v].min = min(tree[2*v+1].min,tree[2*v+1].sum+tree[2*v+2].min);
}
int main(){
	ios_base::sync_with_stdio(false);
	for(int tc = 1;tc<=10;tc++){
		memset(tree,0,sizeof(tree));
		cout << "Test "<<tc << ":\n";
		int n;
		cin >> n;
		string s;
		cin >> s;
		for(int i = 0;i<s.size();i++){
			if(s[i] == '(') arr[i] = 1;
			else arr[i] = -1;
		}
		make(0,0,n-1);
		int q;
		cin >> q;
		while(q--){
			int v;
			cin >> v;
			if(!v){
				if(tree[0].sum == 0 && tree[0].min == 0) cout << "YES\n";
				else cout << "NO\n";
			}else{			
				update(0,0,n-1,v-1);
			}
		}
	}

	return 0;
}
