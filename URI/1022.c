#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


int main(){
	int x,y,a,b;
	char op;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d / %d %c %d / %d",&x,&y,&op,&a,&b);
		int n, d;
		if(op == '+'){
			n = (x*b  + y*a);
			d = y*b;
		}else if(op == '-'){
			n = (x*b  - y*a);
			d = y*b;
		}else if(op == '*'){
			n = x*a;
			d = y*b;
		}else if(op == '/'){
			n = x*b;
			d = a*y;
		}
		int n2, d2;
		n2 = n/gcd(n,d);
		d2 = d/gcd(n,d);
		if(d2 < 0){
			d2 *= -1;
			n2 *= -1;
		}
		
		printf("%d/%d = %d/%d\n",n,d,n2,d2);
	}
	return 0;
}
