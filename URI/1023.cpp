#include<bits/stdc++.h>
using namespace std;

typedef struct casa{
	int litro;
	int pessoa;
	bool operator<(const casa& rhs) const { litro > rhs.litro; }
} casa;
bool acompare(casa lhs, casa rhs) { return lhs.litro < rhs.litro; }
int main(){
	int max = 1000010;
	int n;
	int num = 0;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		casa *v = new casa [n];
		int cons[210] = {0};
		num++;
		printf("Cidade# %d\n",num);
		int i, s = 0, pes = 0;
		for(i = 0;i<n;i++){
			scanf("%d %d",&v[i].pessoa,&v[i].litro);	
			s += v[i].litro;
			pes += v[i].pessoa;
			v[i].litro = v[i].litro/v[i].pessoa;
		}
		for(i = 0;i<n;i++){
			cons[v[i].litro] += v[i].pessoa;
		}
		int k = 0;
		for(i = 0;i<210;i++){
			if(cons[i] > 0){
				printf("%d-%d",cons[i],i);
				if(k < n-1) printf(" ");
				k++;
			}		
		}
		printf("\n");
		double media = (double)s/pes;
		printf("Consumo medio: %.2lf m3.\n",(double)floor(100*media)/100);	
	}
	return 0;
}
