#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef struct no{
    char c;
    no *esq;
    no *dir;
} no;
no* novo(char c){
    no* n = new no;
    n->esq = nullptr;
    n->dir = nullptr;
    n->c = c;
    return n;
}
no* insert(char c,no *raiz){
    if(raiz == nullptr) return novo(c);
    if(c >= raiz->c) raiz->dir = insert(c,raiz->dir);
    else raiz->esq = insert(c,raiz->esq);
    return raiz;
}
void src(char c, no *raiz){
    if(raiz == nullptr){
        cout << c << " nao existe";
        return;
    }
    if(c > raiz->c) src(c,raiz->dir);
    else if(c < raiz->c) src(c,raiz->esq);
    else cout << c << " existe";
}
void pre(no *raiz, bool *f){
    if(raiz==nullptr) return;
    if(!(*f)){
         cout << " ";
    }else{
        *f = false;
    }
    cout << raiz->c;
    pre(raiz->esq,f);
    pre(raiz->dir,f);
}
void pos(no *raiz, bool *f){
    if(raiz==nullptr) return;
    pos(raiz->esq,f);
    pos(raiz->dir,f);
    if(!(*f)){
         cout << " ";
    }else{
        *f = false;
    }
    cout << raiz->c;
}
void in(no *raiz, bool *f){
    if(raiz==nullptr) return;
    in(raiz->esq,f);  
    if(!(*f)){
         cout << " ";
    }else{
        *f = false;
    }
    cout << raiz->c;
    in(raiz->dir,f);
}
int main(){
    int n;
    string cmd;
    no *raiz = nullptr;
    while(cin >> cmd){
        bool f = true;
        if(cmd == "INFIXA"){
        	in(raiz,&f);
			cout << '\n';	
		}else
        if(cmd == "PREFIXA"){
        	pre(raiz,&f);
        	cout << '\n';
		}else
        if(cmd == "POSFIXA"){        	
        	pos(raiz,&f);
        	cout << '\n';
		}else 
        if(cmd == "I"){
            char c;
            cin >> c;
            raiz = insert(c,raiz);
        }else
        if(cmd == "P"){
            char c;
            cin >> c;
            src(c,raiz);
            cout << '\n';
        }
       
    }
    return 0;
}
