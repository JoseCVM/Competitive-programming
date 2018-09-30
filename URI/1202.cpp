#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long long int ull;
#define maxt 2
#define mod 999999;

void identity(ull A[maxt][maxt], int n);
void multMat(ull A[maxt][maxt], ull B[maxt][maxt],int n);
void powMat(ull A[maxt][maxt],ull exp, ull B[maxt][maxt]);

void identity(ull A[maxt][maxt], int dim){
    for (int i = 0; i < dim; i++)
        for (int j = 0; j < dim; j++)
            A[i][j] = (i == j);
}
void powMat(ull A[maxt][maxt],ull exp, ull B[maxt][maxt], int dim){
	identity(B,dim);
	while(exp > 0){
		if(exp&1)
			multMat(B,A,dim);
		multMat(A,A,dim);
		exp /= 2;
	}
}
void multMat(ull A[maxt][maxt], ull B[maxt][maxt],int dim){
	ull C[maxt][maxt] = {{0}};
	for(int i = 0;i<dim;i++){
		for(int j = 0;j<dim;j++){
			for(int k = 0;k<dim;k++){
				C[i][j] += A[i][k] * B[k][j];
				C[i][j] %= mod;
			}
		}
	}
	for(int i = 0;i<dim;i++){
		for(int j = 0;j<dim;j++){
			A[i][j] = C[i][j]%mod;
		}
	}
}
int main(){
    int TC;
    ull M[2][2];
    M[0][0] = 0;
    M[0][1] = M[1][0] = M[1][1] = 1;
    cin >> TC;
    while(TC--){
        ull B[2][2] = {{0}};
        string b;
        cin >> b;
        unsigned long x = std::bitset<8>(b).to_ulong();
        cout << x << '\n';
        powMat(M,x,B,2);
        cout << B[0][1] << '\n';
    }
    return 0;
}
