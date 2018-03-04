#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
//	ios_base::sync_with_stdio(false);
	ull p, q;
	p = 1;
	q = 1;
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		ull a = p + 2*q;
		q = p + q;
		p = a;
	}
	printf("%llu %llu\n",p,q);
	printf("%.10lf\n",(double)p/q);
	return 0;
}

