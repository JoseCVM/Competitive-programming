#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool ok(int d, int v[], int N, int c){
	c--;
	int a = 0;
	for(int i = 1;i<N;i++){
		a += v[i]-v[i-1];
		if(a >= d){
			c--;
			a = 0;
		}
		if(c == 0) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin>>TC;
	while(TC--){	
		int N, C;
		cin >> N >> C;
		int v[100010];
		for(int i = 0;i<N;i++){
			cin >> v[i];
		}
		sort(v,v+N);
	//	for(int i = 0;i<N;i++) cout << v[i] << '\n';
		int lo = 0,hi = 1000000000;
		int lastok = 1;
		while(lo <= hi){
			int mid = (lo+hi)/2;
			if(ok(mid,v,N,C)){
				lo = mid+1;
				lastok = mid;
			}else{
				hi = mid-1;
			}
		}
		cout << lastok << '\n';
	}
	return 0;
}
