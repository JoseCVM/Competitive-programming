#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
#define MAX 100010
int main(){
    ll c, n;
    ll tst = 0;
    while(cin >> c >> n && c && n){
        tst++;
    	ll v[MAX];
    	ll vis[MAX];
    	for(int i = 0;i<n;i++){
    		cin >> v[i];
    	}
    	ll res = 0;
        for(ll i = 0;i<MAX;i++) vis[i] = -1;
        vis[0] = 0;
        ll SUM = 0;
    	for(ll i = 0;i<n;i++){
    		res += v[i] % c;
    		if(vis[res%c] != -1){
    			for(ll j = vis[res%c];j<=i;j++){
                    cout << j+1;
                    SUM += v[j];
                    if(j != i) cout << ' ';
                    else if(j == i) cout << '\n';
                }
    			break;
    		}else{
    			vis[res%c] = i+1;
    		}
    	}
    }
	return 0;
}
