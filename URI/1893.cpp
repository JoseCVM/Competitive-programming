#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;



int main(){
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if(b <= 2) cout << "nova\n";
    else if (b <= 96 && a <= b) cout << "crescente\n";
    else if (b >= 3 && b <= 96 && a > b) cout << "minguante\n";
	else if (b <= 100) cout << "cheia\n";
	return 0;
}

