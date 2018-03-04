#include <stdio.h>
void sub(char *c){
	int t = strlen(c);
	int i;
	for(i = t-1;i>=0;i--){
		c[i]--;
		if(c[i] >= '0') break;
		if(c[i] < '0') c[i] = '9';
	}
	int pos = 0;
	for(i = 0;i<t;i++){
		if(c[i] != '0'){
			pos = i;
			break;
		}
	}
	strcpy(c,c+pos);
}
int main(){
	char c[25];
	while(1){
		scanf("%s%*c",c);
		if(c[0] == '-') break;
		if(c[0] == '0')printf("%s\n",c);
		else{			
			sub(c);
			printf("%s\n",c);
		}
	}
	return 0;
}
