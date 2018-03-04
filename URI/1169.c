#include <stdio.h>

int main(){
	unsigned long long int a;
	double res;
	int n;
	int t;
	scanf("%d",&t);
	while(t--){
		int n1, n2;
		scanf("%d",&n);
		
		a = ((unsigned long long int)1 << n)/12000;
		if(n == 64){			
 			printf("1537228672809129 kg\n",res);
		}else
 			printf("%llu kg\n",a);
	}
}
