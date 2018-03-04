#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[1010];
	while(scanf("%s",s) != EOF){
		int t = strlen(s);
		int i, fail = 0;
		stack <char> q;
		for(i = 0;i<t;i++){
			if(s[i] == '('){
				q.push('(');
			}else if(s[i] == ')' && !q.empty()){
				q.pop();
			}else if(s[i] == ')' && q.empty()){
				fail = 1;
				break;
			}
		}
		if(fail == 0 && q.empty()){
			printf("correct\n");
		}else{
			printf("incorrect\n");
		}
	}
	return 0;
}
