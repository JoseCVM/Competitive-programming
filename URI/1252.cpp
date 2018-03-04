#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int m;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second!=b.second) return a.second < b.second;
	if(a.first % 2 != 0 && b.first % 2 != 0) return a.first > b.first;
	if(a.first % 2 == 0 && b.first % 2 == 0) return a.first < b.first;
	return a.first%2 != 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	
	while((cin >> n >> m) && n!= 0 && m != 0){
		cout << n << ' ' << m << '\n';
		vector<pair<int,int>> v;
		for(int i = 0;i<n;i++){
			int a;
			cin >>a;
			v.push_back(make_pair(a,a%m));
		}
		sort(v.begin(),v.end(),cmp);
		for(int i = 0;i<n;i++) cout << v[i].first << '\n';
	}
	cout << 0 << ' ' << 0 << '\n';
	return 0;
}

