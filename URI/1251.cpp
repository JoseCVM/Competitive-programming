#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	return (a.first < b.first || (a.first == b.first && a.second > b.second));
}
int main(){
	char c[1010];
	int a = 0;
	while(scanf("%[^\n]%*c",c) != EOF){
		int v[300] = {0};
		if(a == 1){
			printf("\n");
			a = 0;
		}
		vector<pair<int,int>> r;
		int t = strlen(c), i;
		for(i = 0;i<t;i++){
			v[c[i]]++;
		}
		for(i = 0;i<300;i++){
			if(v[i] != 0){
				r.push_back(make_pair(v[i],i));
			}
		}
		sort(r.begin(),r.end(),cmp);
		vector<pair<int,int>>::iterator it;
		for(it = r.begin();it != r.end();it++){
			printf("%d %d\n",(*it).second,(*it).first);
		}
		a = 1;
	}
	return 0;
}
