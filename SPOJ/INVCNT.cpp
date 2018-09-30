#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef long long int ll;
#define MAX 10000010

int bit[MAX];
int sum(int i){
	int res = 0;
	i++;
	while(i > 0){
		res+= bit[i];
		i -= i &-i;
	}
	return res;
}
void update(int i, int v){
	i++;
	while(i <= MAX){
		bit[i] += v;
		i += i &-i;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	while(TC--){
		int n;
		memset(bit,0,sizeof(bit));
		cin >> n;
		int v[n+5];
		for(int i = 0;i<n;i++){
			cin >> v[i];
		}
		ll res = 0;
		for(int i = n-1;i>=0;i--){
			res += sum(v[i]);
			update(v[i]+1,1);
		}
		cout << res << '\n';	
	}
	return 0;
}
