#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int i;
		cin.ignore();
		string tel[100010];
		for(i = 0;i<n;i++){
			getline(cin,tel[i]);
		}
		sort(tel,tel+n);
		char c;
		int s = 0;
		string topo = tel[0];
		for(i = 1;i<n;i++){
			int k = 0;
			int l = 0;
			int tam = tel[i].size();
			int j;
			for(j = 0;j<tam;j++){
				if(topo[k] == tel[i][j] && l == 0){
					s++;
				}else{
					topo[k] = tel[i][j];
					l = 1;
				}
				k++;
			}
		}
		cout << s << '\n';
	}
	return 0;
}
