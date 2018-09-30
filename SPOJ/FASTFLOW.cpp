#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MAX 5050
using namespace std;
typedef long long int ll;
struct edge{
	int dest, cap, re; 
	edge(int x, int y, int z) : dest(x), cap(y), re(z){}
};

int n, s, t;
int dist[MAX], nxt[MAX], q[MAX];
vector<edge> g[MAX];


bool bfs(){
    queue<int> q;
    q.push(s);
    memset(dist,0x3f,sizeof(int)*(n+1));
    dist[s] = 0;    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == t) return true;
        for(auto& v : g[u]){
            if(v.cap > 0 && dist[v.dest] == INF){
                dist[v.dest] = dist[u]+1;
                q.push(v.dest);
            }
        }
    }
    return false;
}
int dfs(int a, int flow){
	if(a == t) return flow;
	for(int &i = nxt[a]; i < g[a].size(); i++){
		edge &e = g[a][i];
		if(dist[a] + 1 == dist[e.dest] && e.cap != 0){
			int x = dfs(e.dest, min(flow, e.cap));
			if (x == 0) continue;
			e.cap -= x; 
			g[e.dest][e.re].cap += x;
			return x;
		}		
	}
	dist[a] = INF;
	return 0;
}
/*
bool bfs()
{
	int qb = 0, qe = 0; // qb é o indice do inicio da file // qe é o indice que sucede o ultimo elemento da fila
	q[qe++] = s; // inserção da fonte na fila
	memset(dist, 0x3f, sizeof(int) * (n + 1));
	dist[s] = 0;
	while(qb < qe) // enquanto fila não vazia
	{
		int a = q[qb++];
		if (a == t) return true; // se a bfs chega no sorvedouro podemos retornar porque os vértices que não estão no menor caminho para o sorvedouro não importam
		for(int i = 0; i < g[a].size(); i++)
		{
			edge &e = g[a][i];
			if(e.cap > 0 && dist[e.dest] == INF) // percorre todas as arestas que ainda podem passar fluxo
				dist[q[qe++] = e.dest] = dist[a] + 1; // insere na fila e seta a distância
		}
	}
	return false;
}
 
int dfs(int a, int flow)
{
	if (a == t) // encontramos um caminho aumentante
		return flow;
	for ( int &i = nxt[a]; i < g[a].size(); i++) // percorre a lista de adjacencia, mas ignora os que já foram percorridos sem encontrar um caminho
	{
		edge &e = g[a][i];
		if (dist[a] + 1 == dist[e.dest] && e.cap != 0) // só queremos as arestas que fazem parte de um caminho mínimo e podem passar fluxo
		{
			int x = dfs(e.dest, min(flow, e.cap));
			if (x == 0) continue;
			e.cap -= x; // Passa fluxo pelo caminho aumentante encontrado.
			g[e.dest][e.re].cap += x; // Essa linha não afeta as próximas iterações da dfs porque a aresta reversa não está em um caminho mínimo.
			return x;
		}		
	}
	dist[a] = INF; // Isso só marca o vértice para não ser visitado novamente
	return 0;
}*/
ll dinic(){
    ll flow = 0;
    while(bfs()){
        memset(nxt,0,sizeof(int)*(n+1));
        while(int path = dfs(s,INF))
            flow += path;
    } 
    return flow;
}


int main(){
    int m;
    cin >> n >> m;
    s = 1;
    t = n;
    for(int i = 0;i<m;i++){
        int u, v, c;
        cin >> u >> v >> c;
        if(u == v) continue;
        g[u].push_back(edge(v, c, g[v].size()));
	    g[v].push_back(edge(u, c, g[u].size() - 1));        
    }
    ll fl = dinic();
    cout << fl << '\n';
    return 0;
}