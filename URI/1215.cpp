#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	char c;
	bool end = false;
	set<string> dic;
	while(!end){
		int i = 0;
		char s1[200];
		while(true){
			if(scanf("%c",&c) == EOF){
				end = true;
				break;
			}
			if(!isalpha(c)) break;
			c= tolower(c);
			s1[i++] = c;
		}
		s1[i] = '\0';
		string s2(s1);
		dic.insert(s2);
	}
	for(auto& it : dic){
		if(it.size())
			cout << it << '\n';
	}

	return 0;
}

