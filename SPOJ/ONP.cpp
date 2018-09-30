#include <bits/stdc++.h>
const int Debug = 0;
#define ccout if(Debug)cout
using namespace std;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef long long int ll;

int priority(char c){
	if(c == '^') return 3;
	if(c == '*' || c == '/') return 2;
	if(c == '-' || c == '+') return 1;
	return -1;
}
bool isOp(char c){
	return c == '+' || c == '-' || c == '*' || c == '/'	|| c == '^' || c == ')' || c == '(';	
}
int main(){
	ios_base::sync_with_stdio(false);
	int TC;
	cin >> TC;
	while(TC--){
		string rpn;
		cin >> rpn;
		stack<char> s;
		for(auto& c : rpn){
			if(!isOp(c)) cout << c;
			else if(c == '('){
				s.push(c);
			}else if(c == ')'){
				while(!s.empty() && s.top() != '('){
					cout << s.top();
					s.pop();
				}
				s.pop();
			}else{
				while(!s.empty() && priority(c) <= priority(s.top())){
					cout << s.top();
					s.pop();
				}
				s.push(c);
			}
		}	
		while(!s.empty()){
			cout << s.top();
			s.pop();
		}
		cout << '\n'; 
	}
	return 0;
}
