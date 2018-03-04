#include <stdio.h>

int main(){
	char c[13][50] = {".","January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	scanf("%d",&i);
	printf("%s\n",c[i]);
	return 0;
}
