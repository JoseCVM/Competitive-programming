#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main(){
    int n;
    cin >> n;
    ull fat[15];
    fat[0] = 1;
    for(int i = 1;i<15;i++){
        fat[i] = fat[i-1]*i;
    }
    int r = 0;
    while(n){
        int i = 0;
        while(fat[i] <= n) i++;
        i--;
        n -= fat[i];
        r++;    
    }
    cout << r << '\n';
    return 0;
}
