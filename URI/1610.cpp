#include <bits/stdc++.h>
using namespace std;

bool dfs(list<int> g[], int v, bool rec[], bool vis[]){
	if(!vis[v]){
		vis[v] = true;
		rec[v] = true;
		list<int>::iterator i;
		for(i = g[v].begin();i != g[v].end();i++){
			if((!vis[*i] && dfs(g,*i,rec,vis)) || rec[*i]) return true;
		}
	}
	rec[v] = false;
	return false;
}

int main(){
	int n, k = 1;
	cin >> n;
	while(n--){
		k++;
		int v, e, i;
		cin >> v >> e;
		
		list<int> g[v+5];
		for(i = 0;i<e;i++){
			int v1, v2;		
			cin >> v1 >> v2;
			g[v1].push_back(v2);
		}
		int n = 0;	
		bool rec[10010] = {false};
		bool vis[10010] = {false};
		bool res = true;
		for(i = 1;i<=v;i++){
			if(!vis[i]){
				if(dfs(g,i,rec,vis)){
					res = false;
					break;
				}				
			}
		}
		if(res) cout << "NAO\n";
		else cout <<"SIM\n";
	}
	return 0;
}
