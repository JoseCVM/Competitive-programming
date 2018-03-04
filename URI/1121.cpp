#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

char mapa[110][110];
int m, n;

bool valid(int x, int y){
	return x >= 0 && x < n && y >= 0 && y < m && mapa[x][y] != '#';
}
void mov(int *x, int *y, char dir){
	if(dir == 'N'){
		if(valid(*x-1,*y)){
			*x -= 1;
		}
	}else if(dir == 'S'){
	//	printf("n %d m %d prox: %c: %d\n",n,m,mapa[*x+1][*y],valid(*x+1,*y));
		if(valid(*x+1,*y)){
			*x += 1;
		}
	}else if(dir == 'O'){
		if(valid(*x,*y-1)){
			*y -= 1;
		}
	}else if(dir == 'L'){
		if(valid(*x,*y+1)){
			*y += 1;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	int s;
	while(scanf("%d %d %d%*c",&n,&m,&s) && m && n && s){
		char dir;
		int x, y;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				scanf("%c",&mapa[i][j]);
				if(mapa[i][j] == 'N' || mapa[i][j] == 'S' || mapa[i][j] == 'L' || mapa[i][j] == 'O'){
					dir = mapa[i][j];
					x = i;
					y = j;
					mapa[i][j] = '.';
				
				}
			}
			scanf("%*c");
		}
	//	for(int i = 0;i<n;i++){			
	//		for(int j = 0;j<m;j++){
	//			printf("%c",mapa[i][j]);	
	//		}
	//		printf("\n");
	//	}
		int res = 0;
		for(int i = 0;i<s;i++){
			char cmd;
		//	printf("dir: %c - (%d,%d)\n",dir,x,y);
			scanf("%c",&cmd);
			if(cmd == 'E'){
				if(dir == 'N') dir = 'O';
				else if(dir == 'O') dir = 'S';
				else if(dir == 'S') dir = 'L';
				else if(dir == 'L') dir = 'N';
			}else if(cmd == 'D'){
				if(dir == 'N') dir = 'L';
				else if(dir == 'L') dir = 'S';
				else if(dir == 'S') dir = 'O';
				else if(dir == 'O') dir = 'N';
			}else if(cmd == 'F'){
				mov(&x,&y,dir);				
			}
			if(mapa[x][y] == '*'){
				res++;
				mapa[x][y] = '.';
			}
		}
		printf("%d\n",res);
	}

	return 0;
}

