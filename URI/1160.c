#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int pa, pb;
		double ga, gb;
		scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
		ga = 1 + ga/100;
		gb = 1 + gb/100;
		int t = 0;
		while(pa <= pb){
			t++;
			pa *= ga;
			pb *= gb;	
			if(t > 100) break;		
		}
		if(t <= 100)
			printf("%d anos.\n",t);
		else
			printf("Mais de 1 seculo.\n");
	}
	return 0;
}
