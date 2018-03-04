#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	int k = 1;
	while(scanf("%d",&n) != EOF){	
		if(k != 1) printf("\n");
		int ma = 0, fe = 0, pa = 0;
		int at;
		char c, ct;
		do{
			
			scanf("%d %c%c",&at,&c,&ct);		
			if(at == n){
				pa++;
				if(c == 'M') ma++;
				else fe++;
			}
		}while(ct!='\n');
		
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",k,pa,fe,ma);
		k++;
	}

	return 0;
}

