#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, kg = 0, dias;
	double din = 0;
	cin >> t;
	
	getchar();
	dias = 0;
	while(dias < t){
		double d;
		dias++;
		cin >> d;
		getchar();
		din += d;
		string str;		
	    getline(cin,str);	
	    istringstream iss(str);
	    string word;    
	    int k = 0;
	    while(iss >> word) {       			    
       		k++;
    	}
    	cout  << "day " << dias << ": " << k << " kg\n";		
    	kg+=k;
    	
	}
	cout << fixed << setprecision(2)<< (double)kg/t << " kg by day\nR$ " << (double)din/t << " by day\n";
}
