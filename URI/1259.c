#include<bits/stdc++.h>
using namespace std;

int main(){
	int par[100100], tp = 0;
	int impar[100100], ti = 0;
	int n, i;
	scanf("%d",&n);
	for(i = 0; i< n;i++){
		int val;
		scanf("%d",&val);
		if(val%2 ==0){
			par[tp] = val;
			tp++;
		}else{
			impar[ti] = val;
			ti++;
		}
	}
	sort(par, par + tp);
	sort(impar,impar+ti,greater<int>());
	for(i = 0;i<tp;i++) printf("%d\n",par[i]);
	for(i = 0;i<ti;i++) printf("%d\n",impar[i]);
	return 0;
}
