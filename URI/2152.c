#include <stdio.h>

int main(){
	int t;
	char um[50] = "- A porta abriu!\n";
	char dois[50] = "- A porta fechou!\n";
	scanf("%d",&t);
	while(t--){
		int h, m, e;
		scanf("%d %d %d",&h,&m,&e);
		if(e == 1)
			printf("%02d:%02d %s",h,m,um);
		else
			printf("%02d:%02d %s",h,m,dois);
	}
	return 0;
}
