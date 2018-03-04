#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int t1C, t1F, t2C, t2F;
		scanf("%d x %d",&t1C,&t2F);
		scanf("%d x %d",&t2C,&t1F);
	//	printf("%d x %d\n",t1C,t2F);
	//	printf("%d x %d\n",t2C,t1F);
		
		int saldoT1 = (t1C + t1F) - (t2C + t2F);
		int saldoT2 = (t2C + t2F) - (t1C + t1F);
		if(saldoT1 > saldoT2){
			printf("Time 1\n");
		}else if(saldoT2 > saldoT1){
			printf("Time 2\n");
		}else if(t1F > t2F){
			printf("Time 1\n");
		}else if(t2F > t1F){
			printf("Time 2\n");
		}else{
			printf("Penaltis\n");
		}
	}
	return 0;
}
