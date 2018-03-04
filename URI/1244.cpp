#include<bits/stdc++.h>
using namespace std;
bool comp(const string a, const string b){
	return a.size() > b.size();
}
int main(){
	int n;	
	cin >> n;
	cin.clear();
	fflush(stdin);
	while(n--){		
		vector<string> v;
		string t;
		
	    getline(cin,t);	
	    istringstream iss(t);
	    string word;
	    
	    int k = 0, i;
	    while(iss >> word) {
       		v.push_back(word);
       		k++;
    	}
    	
		stable_sort(v.begin(),v.end(),comp);
		
		for(i = 0;i<k;i++){
			cout << v[i];
			if(i < k-1) cout <<' ';
		}
		cout << '\n';
	}
	
}
