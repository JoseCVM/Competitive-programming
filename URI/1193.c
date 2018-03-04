#include <stdio.h>

int main(){
	int t;
	t = 1;
	int n;
	scanf("%d",&n);
	while(t <= n){
		printf("Case %d:\n",t);
		t++;
		char num[50], cod[10];
		unsigned i;
		scanf("%s %s%*c",num,cod);
		if(strcmp(cod,"bin") == 0){
			int dec = (int)strtol(num, NULL, 2);
			printf("%d dec\n%x hex\n",dec,dec);
		}else if(strcmp(cod,"dec") == 0){
			int dec = (int)strtol(num, NULL, 10);
			printf("%x hex\n",dec);
			int flag = 0;
			for (i = 1 << 31; i > 0; i = i / 2){
				if(dec & i) flag =1;
				if(flag == 1)
					(dec & i)? printf("1"): printf("0");
			}
        	printf(" bin\n");
		}else if(strcmp(cod,"hex") == 0){					
			int dec = (int)strtol(num, NULL, 16);
			printf("%d dec\n",dec);
			int flag = 0;
			for (i = 1 << 31; i > 0; i = i / 2){
				if(dec & i) flag =1;
				if(flag == 1)
					(dec & i)? printf("1"): printf("0");
			
			}
        	
        	printf(" bin\n");			
		}
		printf("\n");
	}
}
