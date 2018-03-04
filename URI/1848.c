#include <stdio.h>

int main(){
	int t = 0;
	char s[10];
	while(t<3){
		int sum = 0;
		scanf("%[^\n]%*c",s);
		if(s[0] == 'c'){
			printf("%d\n",sum);
			t++;
			sum = 0;
		}else{
			int n= 0;
			if(s[0] == '*') n+=4;
			if(s[1] == '*') n+=2;
			if(s[2] == '*') n+=1;
			
			sum += n;
			printf("n %d su %d\n",n,sum);
		}
	}
	return 0;
}
