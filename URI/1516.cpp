#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int m, n;
	while(scanf("%d %d%*c",&n,&m) && m && n){
		char des[55][55];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				scanf("%c",&des[i][j]);
			}
			scanf("%*c");
		}
		int nn, nm;
		scanf("%d %d",&nn,&nm);
		int sl = nn/n;
		int sc = nm/m;
		for(int i = 0;i<n;i++){
			for(int r = 0;r<sl;r++){
				for(int j = 0;j<m;j++){
					for(int rr = 0;rr<sc;rr++){
						printf("%c",des[i][j]);
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}

