#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int main(){
	clock_t t;
	t = clock();
    //std::ios_base::sync_with_stdio(false);
    int n;
    ull r = 0;
    int *a,*b,*c,*d;
    long long max = (1<<29)+5; //Como os numeros podem ir de -2^28 até +2^28, temos 2^30 valores possiveis de soma
	// para nao estoura a memoria, fazemos um vetor com 2^29 posicoes e testamos primeiro as somas positivas, 
	// e depois limpamos o vetor e testamos as negativas 
    short int *f = new short int[max];
   
    cin >> n;
    
    a = new int[n];
	b = new int[n];
	c = new int[n];
	d = new int[n];
   

	memset(f,0,sizeof(f[0])*max);
    for(int i = 0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(a[i]+b[j] >= 0) // Testamos todas as combinações positivas de A+B primeiro
                f[a[i]+b[j]]++;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(c[i]+d[j] <= 0) // E agora checamos o se o inverso existe, e quantos existem, no vetor
                r += (int) f[-1*(c[i]+d[j])]; 
        }
    }
    
	memset(f,0,sizeof(f[0])*max); // Limpamos o vetor
	
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(a[i]+b[j] < 0) // Agora fazemos o mesmo para todas as negativas de A+B
                f[-1*(a[i]+b[j])]++;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(c[i]+d[j] > 0) // E checamos os inversos, agora positivos de C+D
                r += (int) f[(c[i]+d[j])];
        }
    }
    //No total temos 4 loops de N*N, dando uma complexidade de N^2
    cout << r << '\n';
	t = clock() - t;
   // printf ("Demorou %.2f segundos.\n",((float)t)/CLOCKS_PER_SEC);
    return 0;
}