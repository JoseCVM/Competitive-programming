#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool bound(int i,int j, int x, int y){
	return i >= 0 && i < x && j>=0 && j < y;
}

int main(){
	//ios_base::sync_with_stdio(false);
	int x, y;
//	clock_t begin = clock();
	char m[110][110];
	bool v[110][110] = {{false}};
	scanf("%d %d%*c",&y,&x);
	for(int i = 0;i<x;i++){
		for(int j = 0;j<y;j++){
			scanf("%c",&m[i][j]);
//			printf("%c",m[i][j]);
		}
		scanf("%*c");
//		printf("\n");
	}
//	printf("BEGIN\n");
	int l, c;
	l = c = 0;
	bool found = false;
	while(!found){
	//	printf("Estou em %d,%d vis %d: %c\n",l,c,v[l][c],m[l][c]);
		if(v[l][c] && m[l][c] != '*') break;
		v[l][c] = true;
		if(m[l][c] == '*'){
			found = true;
		}else{
			if(m[l][c] == '>'){
				c++;
				while(bound(l,c,x,y) && m[l][c] == '.'){
					 v[l][c] = true;
					 c++;
				}
				if(!bound(l,c,x,y)) break;
			}
			else if(m[l][c] == '<'){
				c--;
				while(bound(l,c,x,y) && m[l][c] == '.'){
					
					v[l][c] = true;
					c--;
				}
				if(!bound(l,c,x,y)) break;
			}else if(m[l][c] == '^'){
				l--;
				while(bound(l,c,x,y) && m[l][c] == '.'){
					 v[l][c] = true;
					 l--;
				}
				if(!bound(l,c,x,y)) break;
			}else if(m[l][c] == 'v'){
				l++;
				while(bound(l,c,x,y) && m[l][c] == '.'){
					 v[l][c] = true;
					 l++;
				}
				if(!bound(l,c,x,y)) break;
			}
		}
	}
	found ? printf("*\n") : printf("!\n");
	//clock_t end = clock();
  //	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  //	printf("%lf\n",elapsed_secs);
	return 0;
}

