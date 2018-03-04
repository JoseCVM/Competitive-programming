#include <bits/stdc++.h>
using namespace std;

bool prime[33000];
bool primes[3501];
//unsigned long long int tabela[10010][1010] = {{0}};
unsigned long long int josephus(int n, int k){
    k++;
    if(n == 1) return 1;
    while(!prime[k]) k++;
    return (josephus(n-1,k) + k -1)%n +1;
}

void sieve(int n){ 
    memset(prime, true, sizeof(prime)); 
    for (int p=2;  p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}  

int main(){
	sieve(32800);
	int n;
	while(true){
		cin >> n;
		if(n == 0) break;
		int k = 1;
		cout << josephus(n,k) << endl;	
	}
	return 0;
}
