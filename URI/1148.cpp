#include <bits/stdc++.h>
using namespace std;
#define INF = 2000000
int dijkstra(list<pair<int,int>> grafo[],int dest,int source, int n){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	int dist[n+5];
	pq.push(make_pair(0,source));
	dist[source] = 0;
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		list< pair<int, int> >::iterator i;
		for(i = grafo[u].begin();i != grafo[u].end();i++){
			int v = i->second;
			int peso = i->first;
			if(dist[v] > dist[u] + peso){
				dist[v] = dist[u]+peso;
				pq.push(make_pair(dist[v],v));
			}
		}
	} 
	return dist[dest];
}
int dijkstradj(int grafo[][550],int source, int dest,int n){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	int dist[n+5], i;
	int pai[n+5];
	pai[source] = -1;
	pq.push(make_pair(0,source));
	for(i = 0;i<n+5;i++) dist[i] = -10;
	dist[source] = 0;
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for(i = 1;i<=n;i++){
			if(grafo[u][i] != -1){
				int v = i;	
				int peso = grafo[u][v];
				if(dist[v] == -10 || dist[v] > dist[u]+peso){
					dist[v] = dist[u]+peso;
					pai[v] = u;
					pq.push(make_pair(dist[v],v));
				}	
			}
		}
	}	
	int k = dest;
//	while(k != -1){
	//	cout << k << " filho de " << pai[k] << '\n';
//		k = pai[k];
//	}
	return dist[dest];
}

int main(){
	int n, m, i, j;
	while(true){
	cin >> n >> m;
		int adj[550][550];
		if(n == 0 && m == 0) break;
		
		for(i = 0;i<n+5;i++)
			for(j = 0;j<n+5;j++)
				adj[i][j] = -1;
		
	
		for(i = 0;i<m;i++){
			int x,y,h;
			cin >> x >> y >> h;
			adj[x][y] = h;
			if(adj[y][x] != -1){
				adj[y][x] = adj[x][y] = 0;
			}
		}			
		
		
		int k;
		cin >> k;
		for(i = 0;i<k;i++){
			int o, d;
			cin >> o >> d;
			int dist =  dijkstradj(adj,o,d,n);
			if(dist == -10) cout << "Nao e possivel entregar a carta"<< '\n';
			else cout << dist<< '\n';
		}
		cout << '\n';
	}
	return 0;
}

