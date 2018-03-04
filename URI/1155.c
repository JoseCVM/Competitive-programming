#include <stdio.h>

int main(){
	double k, d, s;
	s = 0;
	k = d = 1;
	for(d = 1;d<=100;d++)
		s+=k/d;
	printf("%.2lf\n",s);
	return 0;
}
