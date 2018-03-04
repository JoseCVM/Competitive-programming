#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
//	ios_base::sync_with_stdio(false);
	int n, l, c;
	while(scanf("%d %d %d%*c",&n,&l,&c) != EOF){
	//	cin.ignore();
		char s[100];
		int t = 0;
		int lin = 0;
		int pag = 0;
		int tam;
		for(int i = 0;i<n;i++){
			scanf("%s",s);
			t += strlen(s);
			if(t == c){
				t = 0;
				lin++;
			}else if(t > c){
				t = strlen(s) + 1;
				lin++;
			}else if(i<n-1){
				t++;
				if(t == c){
					t = 0;
					lin++;
				}
			}
			if(lin == l){
				lin = 0;
				pag++;
			}
		}
	//	t--;
		int res = (int)ceil((double)lin/l);
	//	cout << res << '\n';
		if(lin || t) pag++;
		printf("%d\n",pag);
	}
	return 0;
}

