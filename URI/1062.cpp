#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(1){
	
			
		scanf("%d",&n);
	//	printf("VOU LER %d VALORE\n",n);
		if(n==0) break;
		int i; 
		while(1){
			stack <int> trem;
			stack <int> est;
			stack <int> saida;
			int val;
			scanf("%d",&val);
			if(val == 0) break;
			trem.push(val);
			for(i = 1;i<n;i++){				
				scanf("%d",&val);
		//		printf("colocando %d no trem\n",val);
				trem.push(val);
			}
			int t = n;
			while(!trem.empty()){
				int prox = trem.top();
				stack <int> print = trem;
				while(!print.empty()){
			//		printf("trem: %d\n",print.top());
					print.pop();
				}
				trem.pop();
				est.push(prox);
			//	printf("Colocando o vagao %d na estacao\n",prox);
				if(est.top() == t){
					while(!est.empty() && est.top() == t){
						int topo = est.top();	
					//	printf("Colocando o vagao %d na saida\n",topo);
						saida.push(topo);
						est.pop();
						t--;
					}
				}			
			}		
			if(est.empty()) printf("Yes\n");
			else printf("No\n");
		}
		printf("\n");
	}
	return 0;
}
