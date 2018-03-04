#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		if(a < 2015){
			printf("%d D.C.\n",2015-a);
		}else{
			printf("%d A.C.\n",a-2015+1);
		}
	}
}
