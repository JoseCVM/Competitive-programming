#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	while(scanf("%d",&n) && n != 0){
		char ini[3*n], fim[3*n];
		stack<char> s;
		int in = 0, re = 0;
		for(int i = 0;i<n;i++){
			scanf(" %c",&ini[i]);
		}		
		for(int i = 0;i<n;i++){
			scanf(" %c",&fim[i]);
		}
		while(in < n){		
		//	printf("push %d %c\n",in,ini[in]);
			while(in < n && (s.empty() || s.top() != fim[re])){
			//	printf("push %d %c\n",in,ini[in]);
				s.push(ini[in]);
				in++;
				printf("I");
			}				
			while(!s.empty() && re < n && s.top() == fim[re]){
			//	printf("pop %c\n",s.top());
				re++;
				printf("R");
				s.pop();
			}
		}
		if(!s.empty()) printf(" Impossible\n");
		else printf("\n");
	}

	return 0;
}

