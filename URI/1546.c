#include <stdio.h>


int main(){
	int t;
	char nomes[5][50] = {{"**"},{"Rolien"},{"Naej"},{"Elehcim"},{"Odranoel"}};
	scanf("%d",&t);
	while(t--){
		int i, n;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&i);
			printf("%s\n",nomes[i]);
		}
	}
	return 0;
}
