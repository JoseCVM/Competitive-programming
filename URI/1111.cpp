#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;

int bfs(pi s, pi dest,vector<pi> m[30][30], int n){
    queue<pi> q;
    bool vis[30][30] = {{false}};
    int dist[30][30];
    for(int i = 0;i<30;i++)
        for(int j = 0;j<30;j++)
            dist[i][j] = -1;
    dist[s.first][s.second] = 0;
    vis[s.first][s.second] = true;
    q.push(s);
    while(!q.empty()){
        pi u = q.front();
        if(u == dest) break;
        cout << "Estou em " << u.first << ' ' << u.second << '\n';
        vis[u.first][u.second] = true;
        q.pop();
        for(auto& v : m[u.first][u.second]){
           cout << "       Vou para " << v.first << ' ' << v.second << '\n';
           if(vis[v.first][v.second]) continue;
           dist[v.first][v.second] = dist[u.first][u.second] + 1;
           q.push(v);
        }
    }
    return dist[dest.first][dest.second];
    
}
int main(){
    int n;
    while(cin >> n && n){
        vector<pi> m[30][30]; //n s o l
        for(int i = n-1;i>=0;i--){
            for(int j = 0;j<n;j++){
                int a,b,c,d;
                cin >> a >> b >> c >> d;    
                cout << "Os vizinhos de " << i << "," << j << " sao " << a <<' ' << b << ' ' << c << ' '<< d << '\n';    
                if(a) m[i][j].push_back(make_pair(i+1,j));
                if(b) m[i][j].push_back(make_pair(i-1,j));     
                if(c) m[i][j].push_back(make_pair(i,j-1));
                if(d) m[i][j].push_back(make_pair(i,j+1));    
            }
        }  
        int p;
        cin >> p;
        while(p--){
            pi x, y;
            cin >> x.first >> x.second >> y.first >> y.second;
            int r = bfs(x,y,m,n);
            if(r == -1) cout << "Impossible\n";
            else cout << r << '\n';        
        }        
    }
    return 0;
}
