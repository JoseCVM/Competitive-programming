#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int i;
		priority_queue<int> pq;
		bool bpq = true;
		queue<int> q;
		bool bq = true;
		stack<int> s;
		bool bs = true;
		for(i = 0;i<n;i++){
			int op, v;
			scanf("%d %d",&op,&v);
			if(op == 1){
				pq.push(v);
				s.push(v);
				q.push(v);
			}else if(op == 2){
				int pqr = pq.top();
				pq.pop();
				int sr = s.top();
				s.pop();
				int qr = q.front();
				q.pop();
				if(pqr != v){
					bpq = false;
				}
				if(qr != v){
					bq = false;
				}
				if(sr != v){ 
					bs = false;
				}
			}
		}
		if(bs && !bq && !bpq){
			printf("stack\n");
		}else if(!bs && bq && !bpq){
			printf("queue\n");
		}else if(!bs && !bq && bpq){
			printf("priority queue\n");
		}else if((bs && bq) || (bs && bpq) || (bq && bpq)){
			printf("not sure\n");
		}
		else if(!bs && !bq && !bpq){
			printf("impossible\n");
		}		
	}
	return 0;
}
