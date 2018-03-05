#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    int j, r;
    scanf("%d %d",&j,&r);
    int n = j*r;
    vector<int> g;
    int jog[510] = {0};
    for(int i = 0;i<n;i++){
        int k;
        scanf("%d",&k);
        jog[i%j] += k;
    }
    int bst = -1;
    int w = -1;
    for(int i = 0;i<j;i++){
        if(jog[i] >= bst){
            bst = jog[i];
            w = i;
        }
    }
    printf("%d\n",w+1);
    return 0;
}

