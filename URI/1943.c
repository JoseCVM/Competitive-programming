#include <stdio.h>

int main(){
	int n, t;
	scanf("%d",&n);
	if(n == 1){
		t = 1;
	}else if(n <= 3){
		t = 3;
	}else if(n <= 5){
		t = 5;
	}else if(n <= 10){
		t = 10;
	}else if(n <= 25){
		t = 25;
	}else if(n <= 50){
		t = 50;
	}else if(n <= 100){
		t = 100;
	}
	printf("Top %d\n",t);
	return 0;
}

