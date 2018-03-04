#include <stdio.h>
#include <string.h>
void toUpper(char *str){
    while (*str != '\0'){
        *str = toupper(*str);
        str++;
    }
}
int main(){
	char n[200];
	while(1){
		scanf("%s",n);
		if(n[0] == '-') break;
		if(n[0] == '0' && n[1] == 'x'){
			int d =(int)strtol(n,NULL,16);
			printf("%d\n",d);
		}else{
			char k[200];
			int d = atoi(n);
			sprintf(k,"%#x",d);
			toUpper(k+2);
			printf("%s\n",k);
		}
	}
	return 0;
}
