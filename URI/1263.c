#include <stdio.h>

int main(){
	char st;
	char at[55], ant[55], aant[55];
	aant[0] = '\0';
	while(scanf("%s%c",ant,&st) != EOF){
		int cnt = 0, i = 1;
		ant[0] = tolower(ant[0]);
		while(st != '\n'){
			scanf("%s%c",at,&st);
			at[0] = tolower(at[0]);
			if(i > 1 && aant[0] == ant[0] && at[0] != ant[0]){	 
				cnt++;
			//	printf("aliteracao: <%s> e <%s>\n",ant,aant);
			}
		//	printf("at <%s> ant <%s> aant <%s>\n",at,ant,aant);
			if(st == '\n'  && at[0] == ant[0]){
				cnt++;
			//	printf("aliteracao: <%s> e <%s>\n",at,ant);

			}
			strcpy(aant,ant);
			strcpy(ant,at);
			i++;
		}	
	
		printf("%d\n",cnt);
	}
	return 0;
}
