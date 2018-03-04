#include <stdio.h>
#include <string.h>
int max(int a, int b){
	return a > b ? a : b;
}
int lcs(char *a, char *b){
	int t1 = strlen(a);
	int t2 = strlen(b);
	int i, j;
	int LCS[52][52];
	int res = 0;
	for(i = 0;i<=t1;i++){
		for(j = 0;j<=t2;j++){
			if(i == 0 || j == 0) LCS[i][j] = 0;
			else if(a[i-1] == b[j-1]){
				LCS[i][j] = LCS[i-1][j-1] + 1;
				res = max(res,LCS[i][j]);
			}
			else{
				LCS[i][j] = 0;
			}
		}
	}
	return res;
}

int main(){
	char a[60], b[60];
	while(scanf("%[^\n]%*c",a) != EOF){
		scanf("%[^\n]%*c",b);
		printf("%d\n",lcs(a,b));
	}
	return 0;
}
