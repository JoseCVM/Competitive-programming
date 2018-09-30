#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int N;
    char nota;
    cin >> N;
    if(N == 0) nota = 'E';
    else if(N <=35) nota = 'D';
    else if(N<=60) nota = 'C';
    else if(N<=85) nota = 'B';
    else nota = 'A';
    cout << nota << '\n'; 
    return 0;
}
