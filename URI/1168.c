#include <stdio.h>

int main(){
	int c[10] = {6,2,5,5,4,5,6,3,7,6};
	int t;
	scanf("%d",&t);
	while(t--){
		char n[110];
		scanf("%s",n);
		int i = 0;
		int s = 0;
		while(n[i] != '\0'){
			s += c[n[i] - '0'];
			i++;
		}
		printf("%d leds\n",s);
	}
	return 0;
}
