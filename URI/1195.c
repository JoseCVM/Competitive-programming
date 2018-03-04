#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	struct node *esq;
	struct node *dir;
	int val;
} node;
node *new_node(int val){
	node *n = malloc(sizeof(node));
	n->esq = n->dir = NULL;
	n->val = val;
	return n;
}
node *insert_bst(node *raiz, int val){
	if(raiz == NULL){
		return new_node(val);
	}
	if(val >= raiz->val){
		raiz->dir = insert_bst(raiz->dir,val);
		
	}else{
		raiz->esq = insert_bst(raiz->esq,val);
	}
	return raiz;
}
void preorder(node *raiz){
	if(raiz == NULL) return;
	printf(" %d",raiz->val);
	preorder(raiz->esq);
	preorder(raiz->dir);
	return;
}
void inorder(node *raiz){
	if(raiz == NULL) return;
	inorder(raiz->esq);
	printf(" %d",raiz->val);
	inorder(raiz->dir);
	return;
}
void posorder(node *raiz){
	if(raiz == NULL) return;
	posorder(raiz->esq);
	posorder(raiz->dir);
	printf(" %d",raiz->val);
	free(raiz);
	return;
}
int main(){
	int t;
	int cas = 0;
	scanf("%d",&t);
	while(t--){
		cas++;
		printf("Case %d:\n",cas);
		node *raiz = NULL;
		int n, i;
		scanf("%d",&n);
		for(i = 0;i<n;i++){
			int val;
			scanf("%d",&val);
			raiz = insert_bst(raiz,val);
		}
		printf("Pre.:");
		preorder(raiz);
		printf("\nIn..:");
		inorder(raiz);
		printf("\nPost:");
		posorder(raiz);
		printf("\n\n");
		raiz = NULL;
	}
	return 0;
}
