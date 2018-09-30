#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
string lltoa(ll num, int base){
    char str[10000];
    ll i = 0LL;
    bool isNegative = false;
    if (num == 0LL){
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0LL && base == 10){
        isNegative = true;
        num = -num;
    }
    while (num != 0LL){
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        num = num/base;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';
    string res(str);
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    ll a;
    while(cin >> a){
        cout << lltoa(a,32) << '\n';
        if(a == 0) break;
    }
}
