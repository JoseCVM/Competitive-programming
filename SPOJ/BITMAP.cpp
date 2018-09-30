#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
typedef long long int ll;
#define MAX 300


int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	while(TC--){
		int bmp[MAX][MAX], dist[MAX][MAX];
		bool vis[MAX][MAX];
		memset(dist,0,sizeof(dist));
		memset(vis,false,sizeof(vis));
		int h,w;
		cin >> h >> w;
		vector<pi> wh;
		for(int i = 0;i<h;i++){
			for(int j = 0;j<w;j++){
				char c;
				cin >> c;
				if(c == '1') wh.push_back(make_pair(i,j));
				
				bmp[i][j] = c -'0';
			}
		}
		
		queue<pi> pq;
		for(auto& e : wh){
			dist[e.first][e.second] = 0;
			vis[e.first][e.second] = true;
			pq.push(e);
		}
		while(!pq.empty()){
			pi u = pq.front();
			int x = u.first, y = u.second;
			pq.pop();
			if(x+1 < h && !vis[x+1][y]){
				dist[x+1][y] = dist[u.first][u.second] + 1;
				vis[x+1][y] = true;
				pq.push(make_pair(x+1,y));
			}
			if(x-1 >= 0 && !vis[x-1][y]){
				dist[x-1][y] = dist[u.first][u.second] + 1;
				vis[x-1][y] = true;
				pq.push(make_pair(x-1,y));
			}
			if(y+1 < w && !vis[x][y+1]){
				dist[x][y+1] = dist[u.first][u.second] + 1;
				vis[x][y+1] = true;
				pq.push(make_pair(x,y+1));
			}
			if(y-1 >= 0 && !vis[x][y-1]){
				dist[x][y-1] = dist[u.first][u.second] + 1;
				vis[x][y-1] = true;
				pq.push(make_pair(x,y-1));
			}
		}
		for(int i = 0;i<h;i++){
			for(int j = 0;j<w;j++){
				cout << dist[i][j];
				if(j+1<w) cout << ' ';				 
			}
			cout << '\n';
		}
	}

	return 0;
}
