#include <stdio.h>
int max(int a, int b){
	return a > b ? a : b;
}
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int a, b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0) return 0;
		char s1[15],s2[15];
		int cnt = 0;
		int m1, m2;
		m1 = max(a,b);
		m2 = min(a,b);
		while(m1>0){
			int d1, d2;
			d1 = m1%10;
			d2 = m2%10;
			m1 /=10;
			m2 /=10;
			if(d1 + d2 >= 10){
				cnt++;			
				if(min(m1%10,m2%10) < 9){
					if(m1%10 < m2%10) m1++;
					else m2++;
				}
			}
		}
		if(cnt== 1)
		printf("%d carry operation.\n",cnt);
		else if(cnt > 1) printf("%d carry operations.\n",cnt);
		else printf("No carry operation.\n");	
	}
	return 0;	
}
