#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.first - a.second > b.first - b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	int n, g;
	while(cin >> n >> g){
		int pt = 0;
		pair<int,int> j[n];
		for(int i = 0;i<n;i++){
			cin >> j[i].first >> j[i].second;
		}
		sort(j,j+n,cmp);
	//	cout << "\n\n";
		for(int i = 0;i<n;i++){
	//		cout <<j[i].first << ' '<< j[i].second << '\n';
			if(g > 0 && j[i].first <= j[i].second){
				int jf, js;
				jf = j[i].first;
				js = j[i].second;
				j[i].first += min(g,(j[i].second - j[i].first) + 1);
				g = g -  ((js - jf) + 1);
			}
			pt += j[i].first > j[i].second ? 3 : j[i].first == j[i].second ? 1 : 0; 
		}
		cout << pt << '\n';
	}

	return 0;
}

