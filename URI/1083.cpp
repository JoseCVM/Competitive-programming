#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

int cmp(char a){
	if(a == '^')             return 100000;
	if(a == '*' || a == '/') return 10000;	
	if(a == '+' || a == '-') return 1000;
	if(a == '>' || a == '<' || a == '=' || a == '#') return 100;
    if(a == '.')             return 10;
    if(a == '|')             return 1;
	return -1;
}
bool alphanum(char c)
bool op(char c){
	return cmp(c) != -1;
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
		    if(!op(c) && !alphanum(c)){
		        print("Lexical error!\n");
		        break;
		    }
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

