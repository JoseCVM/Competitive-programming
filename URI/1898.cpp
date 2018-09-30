#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
template<class T> T strToNum(const string s){
    stringstream ss;
    ss << s;
    T v;
    ss >> v;
    return v;
}
int main(){
    string a,b;
    cin >> a >> b;
    string cpf, prop1, prop;
    ll cpnum, som;
    bool ponto = false, ponto2 = false;
    int tv = 0, tv2 = 0;
    for(char c : a){
        if(ponto == true && c == '.') break;
        if(ponto == true && tv == 2) break;
        if(c >= '0' && c <= '9' && cpf.size() < 11) cpf.push_back(c);
        else if(c >= '0' && c <= '9' || (ponto == false && c == '.')){
            prop.push_back(c);
            if(ponto == true) tv++;
            if(c == '.') ponto = true;
        }
    }
    for(char c : b){
        if(ponto2 == true && c == '.') break;
        if(ponto == true && tv2 == 2) break;
        if(c >= '0' && c <= '9'|| (ponto2 == false && c == '.')){
            prop1.push_back(c);
            if(ponto2 == true) tv2++;
            if(c == '.') ponto2 = true;
        }
    cpnum = strToNum<ll>(cpf);
    double som2 = strToNum<double>(prop);
    double som1 = strToNum<double>(prop1);
    //cout << som1 << '\n' << som2 << '\n';
    som1 += som2;
    cout << "cpf " << cpf << '\n';
    cout <<fixed << setprecision(2) << som1 << '\n';
}
