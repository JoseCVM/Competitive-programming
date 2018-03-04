#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

bool op(char c){
	return c == '-' || c == '*' || c == '+' || c == '/' || c == '^' || c == ')' || c == '(';
}
int cmp(char a){
	if(a == '^') return 100;
	if(a == '*' || a == '/') return 10;
	if(a == '+' || a == '-') return 1;
	return -1;
}
int main(){
//	ios_base::sync_with_stdio(false);
	int n;
	scanf("%d%*c",&n);
	while(n--){
		stack<char> s;
		char c;
		scanf("%c",&c);
		while(c != '\n'){
		//	cout << c << " h\n";
			if(!op(c)) 	printf("%c",c);
			else if(c == '('){
				s.push(c);
			}else if(c == ')'){
				while(!s.empty() && s.top() != '('){
					char to = s.top();
					s.pop();
					printf("%c",to);
				}
				s.pop();
			}
			else{
				while(!s.empty() && cmp(c) <= cmp(s.top())){
					char to = s.top();
					s.pop();
					printf("%c",to);
				}
				s.push(c);
			}
			scanf("%c",&c);
		}
		while(!s.empty()){
		//	cout << "AQUI OH " << s.top() << '\n';
			char to = s.top();
			s.pop();
			printf("%c",to);
		}
		printf("\n");
	}

	return 0;
}

