#include <stdio.h>

int main(){
	int a,i;
	int par;
	par = 0;
	for(i = 0;i<5;i++){
		scanf("%d",&a);	
		if(a%2==0){
			par++;
		}
	}
	printf("%d valores pares\n",par);
	return 0;
}
