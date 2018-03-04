#include <stdio.h>

int main(){
	double s;
	int a = 0;
	scanf("%lf",&s);
	if(s<= 2000){
		printf("Isento\n");
		a = -1;
	} 
	else if(s<=3000){
		s = (s-2000)*0.08;
	}
	else if(s<=4500){
		s = 1000*0.08 + (s-3000) * 0.18;
	}
	else{
		s = 1000*0.08 + 1500 *0.18 + (s-4500) *0.28;
	}
	if(a != -1)
		printf("R$ %.2lf\n",s);
	return 0;
}
