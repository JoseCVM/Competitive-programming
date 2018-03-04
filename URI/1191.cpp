#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;

typedef struct no{
	no *left;
	no *right;
	char val;
}no;
int src(string in, int inS,int inE,char c){
	for(int i = inS;i<=inE;i++)
		if(in[i] == c) return i;
}
no* build(string in, string pre, int inS,int inE,int *preIn){
	if(inS > inE) return nullptr;
	no *tN = new no;
	tN->left = tN->right = nullptr;
	tN->val = pre[*preIn];
	*preIn += 1;
	if(inS == inE) return tN;
	
	int inI = src(in,inS,inE,tN->val);
	tN->left = build(in,pre,inS,inI-1,preIn);
	tN->right = build(in,pre,inI+1,inE,preIn);
	return tN;
}
void inOrder(no *raiz){
	if(raiz == nullptr) return;
	inOrder(raiz->left);
	inOrder(raiz->right);
	cout << raiz->val;
}
void delT(no *raiz){
	if(raiz == nullptr) return;
	delT(raiz->left);
	delT(raiz->right);
	delete raiz;
}
int main(){
	ios_base::sync_with_stdio(false);
	string pre, in;
	while(cin >> pre >> in){
		int preIn = 0;
		no *raiz = build(in,pre,0,pre.size()-1,&preIn);
		inOrder(raiz);
		cout << '\n';
		delT(raiz);
	}

	return 0;
}

