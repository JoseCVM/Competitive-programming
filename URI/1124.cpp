#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

double dist(int x1, int y1, int x2, int y2){
	return sqrt((x1-x2)*(x1-x2) + (y1 - y2)*(y1 - y2));
}

int main(){
	//ios_base::sync_with_stdio(false);
	int l, c, r1, r2;
	while((scanf("%d %d %d %d",&l,&c,&r1,&r2)) && l != 0 && c != 0 && r1 != 0 && r2 != 0){
		int d1 = 2*r1;
		int d2 = 2*r2;
		!(max(d1,d2) > min(l,c)) && (dist(r1,r1,l-r2,c-r2) >= r1+r2) ? printf("S\n") : printf("N\n");	
	}
	return 0;
}

