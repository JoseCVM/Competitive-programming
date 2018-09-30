#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int TC;
    int ndiv[1001] = {0}, nesf[1001] = {0};
    for(int i = 1;i<1001;i++){
        for(int j = 1;j<i;j++){
            if(i%j == 0) ndiv[i]++;
        }
    }
    for(int i = 1;i<1001;i++){
        nesf[i] = nesf[i-1] + (ndiv[i]%2 == 0 ? 0 : 1);
    }
    cin >> TC;
    while(TC--){
        int n;
        cin >> n;
        cout << nesf[n] << '\n';
    }
}
