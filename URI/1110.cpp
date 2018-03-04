#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		if(n == 0) break;
		deque <int> dq;
		vector <int> vec;
		int i;
		for(i = n;i>0;i--){
			dq.push_back(i);
		}
		while(dq.size() >= 2){
			int k = dq.back();
			dq.pop_back();
			vec.push_back(k);
			k = dq.back();
			dq.pop_back();
			dq.push_front(k);
		}
		cout <<  "Discarded cards: " << vec[0];
		for(i = 1;i<vec.size();i++){
			cout << ", " << vec[i];
		}
		cout << "\nRemaining card: " << dq.back() << '\n';
	}
	return 0;
}
