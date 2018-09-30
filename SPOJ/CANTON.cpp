#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef long long int ll;
#define MAX 10000010
vector<pi> v;
void f(){
	int at = 1;
	while(v.size() < MAX){
		int i = at, j = 1;		
		bool rev = i%2 == 0;
		while(i >= 1 && i <= at && j >= 1 && j <= at){
		    if(!rev)
			    v.push_back(make_pair(i,j));
			else
			    v.push_back(make_pair(j,i));
			if(v.size() > MAX) break;
			i--;
			j++;
		}
		at++;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	f();
	int TC;
	cin >> TC;
	while(TC--){
		int n;
		cin >> n;
		n--;
		cout << "TERM " << n+1 << " IS " << v[n].first << '/' << v[n].second << '\n';
	}
	return 0;
}