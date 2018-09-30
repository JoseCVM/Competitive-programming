#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int search(char v[], char a, int n){
    for(int i = 0; i < n; i++)
      if(v[i] == a)
         return i;
    return -1;
}
void solve(char in[], char pre[], int n){
   int r = search(in, pre[0], n); 
   if(r != 0)
      solve(in, pre+1, r);
   if(r != n-1)
      solve(in+r+1, pre+r+1, n-r-1); 
    printf("%c",pre[0]);
}


int main(){
	//ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		char in[2010], pre[2010];
		scanf("%d%*c",&n);
		for(int i = 0;i<n;i++) scanf("%c",&pre[i]);
		scanf("%*c");
		for(int i = 0;i<n;i++) scanf("%c",&in[i]);
		solve(in,pre,n);
		printf("\n");
	}
	
	return 0;
}

