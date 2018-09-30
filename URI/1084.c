#include <stdio.h>
#include <string.h>
//#include <time.h>
#define MAX 100010 
 
char arr[MAX],tree[4*MAX],n;
char maxi(char i, char j){
	if(i == -1) return j;
	if(j == -1) return i;
	//printf("%d:%d  > %d:%d?\n",i,arr[i],j,arr[j]);
	return arr[i] > arr[j] ? i : j;
}
void make(int v, int ss, int se){
	if(ss == se){
		tree[v] = ss;
		return;
	}
	int m = (ss+se)/2;
	make(2*v+1,ss,m);
	make(2*v+2,m+1,se);
	//printf("%d,%d: %d         %d\n",ss,se,tree[2*v+1],tree[2*v+2]);
	tree[v] = maxi(tree[2*v+1],tree[2*v+2]);
}
char query(int ss, int se, int l, int r, int v){
	if(ss > se || ss > r || se < l) return -1;
	//printf("%d,%d    %d,%d       max = %d\n",ss,se,l,r,tree[v]);
	if(ss >= l && se <= r)	return tree[v];	
	int m = (ss+se)/2;
	return maxi(query(ss,m,l,r,2*v+1), query(m+1,se,l,r,2*v+2));
}
int main(){
//	clock_t begin = clock();
	int n, d;	
	char res[100010];
	while(1){
	    memset(arr,0,sizeof(char)*MAX);
	    memset(tree,0,4*sizeof(char)*MAX);
		scanf("%d %d",&n,&d);
		if(n == d && d == 0) break;	
		int k = 0;
		scanf("%s%*c",arr);
		make(0,0,n-1);
		int i,j;	
		d = n - d;
		int tam = strlen(arr);
		int ini = 0;
		while(d > 0){
			int p = tam - d;
		 	printf("precisamos checar os %d primeiros digitos para sobrarem %d no fim de %s\n",p,d,arr);
			char max = '0' - 1;
			int posm = -1;
			int idx = query(0,n-1,ini,p,0);
		    max = arr[idx];		
		    printf("Queremos o max entre %d e %d : %d\n",ini,p,idx);  
			printf("escolheu %c (%d), sobra %s\n",max,idx,arr+ini);	
			ini = idx+1;
			d--;
			res[k] = max;
			k++;
		}
		res[k] = '\0';
		printf("%s\n",res);
	}
//	clock_t end = clock();
//	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//	printf("Tempo: %.2lf\n",time_spent);
	return 0;
}
