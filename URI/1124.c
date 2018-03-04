#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	//ios_base::sync_with_stdio(false);
	int l, c, r1, r2;
	while((scanf("%d %d %d %d",&l,&c,&r1,&r2)) && l != 0 && c != 0 && r1 != 0 && r2 != 0){
		bool r = false;
		if(max(r1,r2) < l && (r1 + r2 < c)){
			r = true;
		}else if(max(r1,r2) < c && (r1 + r2 < l)){
			r = true;
		}else if(min(c,l) >  sqrt((double)((r1+r2)*(r1+r2))/2)){
			r = true;
		}
		r? printf("S\n") : printf("N\n");
	}
	return 0;
}

