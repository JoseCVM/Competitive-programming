#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n && n){
        int v[n], r = 0, nm = n-1, sum = 0;
        for(int i = 0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        if(!sum){
            r++;
            v[0] = 1;
        }
        bool s = true;
      
        while(s){
            s = false;
            int prev = n-1;
            for(int i = 0;i<nm;i++){
                if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 0){
            //        cout << "erro em " << i << '\n';
                    v[i+2] = 1;
                    r++;
                    s = true;
                }            
            }
            if(v[n-2] == 1 && v[n-1] == 0 && v[0] == 0){
                r++;
                v[0] = 1;
                s = true;
            //    cout << "erro em " << n-2 << '\n';
            }
            if(v[n-1] == 1 && v[0] == 0 && v[1] == 0){
                r++;
                v[1] = 1;
                s = true;
            //    cout << "erro em " << n-1 << '\n';
            }   
        }
        cout << r << '\n';
    }
}
