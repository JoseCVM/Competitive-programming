#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[60], b[60];
		char res[120];
		scanf("%s %s",a,b);
		int t1, t2, r = 0, i = 0, j = 0;
		t1 = strlen(a);
		t2 = strlen(b);
		while(i < t1 && j < t2){
			res[r] = a[i];
			i++;
			r++;
			res[r] = b[j];
			j++;
			r++;
		}	
		int k;	
		for(k = j;k<t1;k++,r++){
			res[r] = a[k];
		}
		for(k = j;k<t2;k++,r++){
			res[r] = b[k];
		}
		res[t1+t2] = '\0';
		printf("%s\n",res);
	}
	return 0;
}
