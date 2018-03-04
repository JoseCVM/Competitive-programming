#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
pair<int,int> mov[8] = {{2,1},{-2,1},{-2,-1},{2,-1},{1,2},{-1,2},{-1,-2},{1,-2}};
bool valid(int x, int y){
	return x >= 0 && x < 8 && y >= 0 && y < 8;
}
int bfs(int vx, int vy, int dx, int dy){
	int dist[8][8];
	int vis[8][8] = {{0}};
	vis[vx][vy] = 1;
	dist[vx][vy] = 0;
	queue<pair<int,int>> q;
	q.push(make_pair(vx,vy));
	while(!q.empty()){
		pair<int,int> v = q.front();
		q.pop();
		for(int i = 0;i<8;i++){
			if(valid(v.first+mov[i].first,v.second+mov[i].second) && !vis[v.first+mov[i].first][v.second+mov[i].second]){
				dist[v.first+mov[i].first][v.second+mov[i].second] = dist[v.first][v.second]+1;
				q.push(make_pair(v.first+mov[i].first,v.second+mov[i].second));
				vis[v.first+mov[i].first][v.second+mov[i].second] = 1;				
			}
		}
	}
	return dist[dx][dy];
}
int dijkstra(int vx, int vy, int dx, int dy){
	int dist[8][8];
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
	for(int i = 0;i<8;i++)
		for(int j = 0;j<8;j++){		
			dist[i][j] = INT_MAX;
		}
		
	dist[vx][vy] = 0;
	
	pq.push(make_pair(0,make_pair(vx,vy)));
	while(!pq.empty()){
		pair<int,pair<int,int>> u = pq.top();
		int du = u.first;
		pair<int,int> lu =u.second;
	//	printf("Topo: (%d,%d)\n",lu.first,lu.second);
		pq.pop();
		for(int i = 0;i<8;i++){
			if(valid(lu.first+mov[i].first,lu.second+mov[i].second)){
				pair<int,int> nxt = make_pair(lu.first+mov[i].first,lu.second+mov[i].second);
		//		printf("Indo de (%d,%d) para (%d,%d)\n",lu.first,lu.second,nxt.first,nxt.second);
				int alt = dist[lu.first][lu.second] + 1;
				if(alt < dist[nxt.first][nxt.second]){
					dist[nxt.first][nxt.second] = alt;
					pq.push(make_pair(dist[nxt.first][nxt.second],make_pair(nxt.first,nxt.second)));
				}
			}
		}
	}

	return dist[dx][dy];
}
int main(){
	list<int> g[64];
	
	//ios_base::sync_with_stdio(false);
	char l1,c1,l2,c2;
	while(scanf("%c%c%*c%c%c%*c",&l1,&c1,&l2,&c2) != EOF){
	//	printf("%c %c %c %c ----\n",l1,c1,l2,c2);
		int x1, y1, x2, y2;
		x1 = l1 - 'a';
		x2 = l2 - 'a';
		y1 = c1 - '0' - 1;
		y2 = c2 - '0' - 1;
	//	printf("(%d,%d) (%d,%d)\n",x1,y1,x2,y2);	
		printf("To get from %c%c to %c%c takes %d knight moves.\n",l1,c1,l2,c2,bfs(x1,y1,x2,y2));		
	}

	return 0;
}

