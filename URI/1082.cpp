#include <bits/stdc++.h>
using namespace std;

vector<char> dfs(list<int> g[], int N, int p,bool v[]){
	vector<char> res;
	stack<int> q;
	q.push(p);
	res.push_back((char)(p+'a'));
	v[p] = true;
	while(!q.empty()){
		int u = q.top();
		q.pop();
		list<int>::iterator i;
		for(i = g[u].begin();i != g[u].end();i++){
			if(!v[*(i)]){
				q.push(*(i));
				v[*(i)] = true;
				res.push_back((char) (*i + 'a'));
			}
		}
	}
	return res;
}

int main(){
	int n, k = 1;
	cin >> n;
	while(n--){
		cout << "Case #" << k << ":\n";
		k++;
		int v, e, i;
		cin >> v >> e;
		
		list<int> g[v];
		for(i = 0;i<e;i++){
			char v1, v2;
			cin.ignore(256,'\n');
			cin >> v1 >> v2;
			int a1, a2;
			a1 = v1-'a';
			a2 = v2-'a';
			g[a1].push_back(a2);
			g[a2].push_back(a1);
		}
		int n = 0;
		vector<char> res;
		bool vis[30] = {false};
		for(i = 0;i<v;i++){
			if(vis[i] == false){
				res = dfs(g,v,i,vis);
				sort(res.begin(),res.end());
				vector<char>::iterator it;
				for(it = res.begin();it!=res.end();it++){
					cout << *it<<',';
				}
				cout <<'\n';
				n++;
			}
		}
		cout << n << " connected components\n\n";
	}
	return 0;
}
