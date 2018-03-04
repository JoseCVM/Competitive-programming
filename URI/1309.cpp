#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
//	ios_base::sync_with_stdio(false);
	char n[20];
	int c;
	while(scanf("%s%*c%d",n,&c) != EOF){
		int t = strlen(n);
		int ini = 3;
		printf("$");
		if(t == 1){
			printf("%c",n[0]);
		}else if(t == 2){
			printf("%c%c",n[0],n[1]);
		}else if(t == 3){
			printf("%c%c%c",n[0],n[1],n[2]);
		}else{
			if(t%3 == 1){
				printf("%c",n[0]);
				ini = 1;
			}else if(t%3 == 2){
				printf("%c%c",n[0],n[1]);
				ini = 2;
			}else{
				printf("%c%c%c",n[0],n[1],n[2]);
			}
			printf(",");
			int k = 0;
			for(int i = ini;i<t;i++){		
				if(k == 3 && i != t-1){
					printf(",");
					k  = 0;
				}
				k++;
				printf("%c",n[i]);
			}
		}			
		if(c < 10){
			printf(".0%d\n",c);
		}else{
			printf(".%d\n",c);
		}
	}



	return 0;
}

