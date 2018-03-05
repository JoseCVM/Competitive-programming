#include <bits/stdc++.h>
using namespace std;
int revt[100100];
int reverse(int a){
    if(revt[a] == -1){    
        stringstream sss;
        stringstream ss;
        ss << a;
        string s = ss.str();
        reverse(s.begin(),s.end());
        sss << s;
        sss >> revt[a];
    }
        
    return revt[a];
}
int dist[100100];
bool vis[100100];
int dijkstra(int a, int b){
   
    memset(vis,false,sizeof(bool)*100100);
    queue<pair<int,int>> pq;
    dist[a] = 0;
    pq.push(make_pair(0,a));
    while(!pq.empty()){
        pair<int,int> u = pq.front();
        pq.pop();
        if(u.second == b) break;
        int v1 = (u.second)+1;
        int v2 = reverse(u.second);
        int alt;
        alt = dist[u.second] + 1;
        if(!vis[v1]){
            dist[v1] = alt;
            vis[v1] = true;
            pq.push(make_pair(dist[v1],v1));
        }
        if(!vis[v2]){
            dist[v2] = alt;
            vis[v2] = true;
            pq.push(make_pair(dist[v2],v2));
        }        
    }
    return dist[b];
}
int main(){
    memset(revt,-1,sizeof(int)*100100);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << dijkstra(a,b) << '\n';
    }
}
