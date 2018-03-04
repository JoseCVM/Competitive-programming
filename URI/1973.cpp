#include <bits/stdc++.h>
using namespace std;
unsigned long long int max(unsigned long long int a,unsigned long long  int b){
	return a > b ? a : b; 
}
unsigned long long int star[1000010];
int atk[1000010] = {0};

int main(){
	unsigned long long 	int n,i;	
	unsigned long long int m = 0;
	unsigned long long int atacadas = 0;
	scanf("%llu",&n);
	for(i = 1;i<=n;i++){
		scanf("%llu",&star[i]);
		
		m+=star[i];
	}
	unsigned long long int r = 0;
	i = 1;
	while(i > 0 && i<=n){
		int nxt = i;
		if(star[i]%2==0){
			nxt--;
		}else{
			nxt++;
		}
		if(star[i] > 0) r++;
		star[i] = max(0,star[i]-1);
		if(atk[i] == 0){
			atk[i] = 1;
			atacadas++;
		}
		i = nxt;
	}
	printf("%llu %llu\n",atacadas,m-r);
	return 0;
}
