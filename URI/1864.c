#include <stdio.h>

int main(){
	char f[120] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int d;
	scanf("%d",&d);
	f[d] = '\0';
	printf("%s\n",f);
}
