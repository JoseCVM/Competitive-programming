#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	scanf("%d%*c",&t);
	while(t--){
		stack <char> q;
		string s;
		getline(cin, s);
		int tam = s.size();
		int i, cnt = 0;
		for(i = 0;i<tam;i++){
			if(s[i] == '<'){
				q.push('<');
			}else if(s[i] == '>' && !q.empty()){
				q.pop();
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}	
	return 0;
}
