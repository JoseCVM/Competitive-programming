#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m[9][9];
         for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                m[i][j]  = -1;
            }
        }    
        for(int i = 0;i<9;i+=2){
            for(int j = 0;j<i+1;j+=2){
                cin >> m[i][j];
            }
        }    
         for(int i = 0;i<7;i+=2){
            for(int j = 0;j<i+1;j+=2){
                m[i+2][j+1] = (m[i][j] - m[i+2][j] - m[i+2][j+2])/2;
                m[i+1][j] = m[i+2][j] + m[i+2][j+1];
                m[i+1][j+1] = m[i+2][j+1] + m[i+2][j+2];
            }
        }    
         for(int i = 0;i<9;i++){
            for(int j = 0;j<i+1;j++){
                cout << m[i][j];
                if(j < i) cout << ' '; 
            }
            cout << '\n';
        }    
    }

}
