#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int cmp(int a, int b, int pos[], int n){
	int pa,pb;
	for(int i = 0;i<n;i++){
		if(pos[i] == a){
			pa = i;
			break;
		}
	}
	for(int i = 0;i<n;i++){
		if(pos[i] == b){
			pb = i;
			break;
		}
	}
	return pa < pb;
}

int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	while(scanf("%d",&n) != EOF){
		int ini[n], fim[n];
		for(int i = 0;i<n;i++) scanf("%d",&ini[i]);
		for(int i = 0;i<n;i++) scanf("%d",&fim[i]);
		int s = 1;
		int cnt = 0;
		while(s){
			s = 0;
			for(int i = 1;i<n;i++){
			//	printf("comparando %d e %d\n",ini[i],ini[i-1]);
				if(cmp(ini[i],ini[i-1],fim,n)){
				//	printf("%d menor que %d\n",ini[i],ini[i-1]);
					swap(ini[i],ini[i-1]);
					cnt++;
					s = 1;
				}
			}
		}
	//	for(int i = 0;i<n;i++) printf("%d ",ini[i]);
		printf("%d\n",cnt);
	}

	return 0;
}

