#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
//	ios_base::sync_with_stdio(false);
	int n;
//	clock_t t;
	while(scanf("%d",&n) && n){
	//	t = clock();
	//	memset(p,false,sizeof(p));
		printf("1");
		for(ull i = 2;i<=n;i++){
			if(i*i <= n) printf(" %d",i*i); 
		}
	//	for(int i = 1;i<=n;i++){ 
		//	if(p[i]) printf("%d ",i);
	//	}
		printf("\n");
	//	t = clock() - t;
  	//	printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
	}

	return 0;
}

