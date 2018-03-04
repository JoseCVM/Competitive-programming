/*#include <stdio.h>
long long int merge_sort(int a[],int temp[],int l,int r);
long long int merge(int a[],int temp[],int l,int m,int r);
long long int bubble_sort(int a[],int n){
	int s = 1,i, cnt = 0;
	while(s){
		s = 0;
		for(i = 1;i<n;i++){
			if(a[i] < a[i-1]){
				int aux = a[i];
				a[i] = a[i-1];
				a[i-1] = aux;
				cnt++;
				s = 1;
			}
		}
	}
	return cnt;
}
long long int merge_sort(int a[],int temp[],int l,int r){
    long long int cnt=0;
    int m;
    if(r>l){
        m=(r+l)/2;
        cnt=merge_sort(a,temp,l,m);
        cnt+=merge_sort(a,temp,m+1,r);
        cnt+=merge(a,temp,l,m+1,r);
    }
    return cnt;
}

long long int merge(int a[],int temp[],int l,int m,int r){
    int i,j,k;
    long long int cnt=0;
    i=l;
    j=m;
    k=l;
    while(i<m && j<=r){
        if(a[i]<=a[j])
            temp[k++] = a[i++];
        else{
            temp[k++] = a[j++];
            cnt+=m-i;
        }
    }
    while (i<m)
        temp[k++]=a[i++];
    while(j<=r)
        temp[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=temp[i];
    return cnt;
}

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int i;
		int v[100010];
		int v2[100010];
		int tmp[100010];
		for(i = 0;i<n;i++){
			scanf("%d",&v[i]);
			v2[i] = v[i];
		}
		long long int res = merge_sort(v,tmp,0,n);
		long long int res2 = bubble_sort(v2, n);
		printf("res %lld\nres2 %d\n",res,res2);
		if(res%2==0)printf("Carlos\n");
		else printf("Marcelo\n");
	}
	return 0;
}*/
#include <stdio.h>

int main(){
	int vet[100010], t;
	while(1){
		scanf("%d",&t);
		if(t== 0) break;
		int i;
		for(i =0;i<t;i++) scanf("%d",&vet[i]);
		int res = i = 0;
		while(i<t){
			if(vet[i]-1 != i){
				int a = vet[i]-1;
				int e = vet[i];
				vet[i] = vet[a];
				vet[a] = e;
				res += 2*(a-i)-1;
			}else{
				i++;
			}
		}
		if(res%2==0) printf("Carlos\n");
		else printf("Marcelo\n");
	}
	return 0;
}

 
