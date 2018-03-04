#include <stdio.h>

int main(){
	int m,i, max, pos;
	scanf("%d",&max);
	pos = 1;
	for(i = 1;i<100;i++){
		scanf("%d",&m);
		if(m > max){
			max = m;
			pos = i+1;
		}
	}
	printf("%d\n%d\n",max,pos);
	return 0;
}
