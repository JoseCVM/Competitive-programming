#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n],ct1=0,tam=0,j=0;
        for (int i=0; i<n; i++){
            int v; cin >> v;
            if (v==1) ct1++;
            else{
                arr[j++]=v;
                tam++;
            }
        }
        sort(arr,arr+tam);
        for(int i=0; i<ct1; i++)cout << "1 ";
        if(tam==2 && arr[0]==2 && arr[1]==3)
            cout<<2<<" "<<3;
        else{
            for(int i=tam-1; i>=0; i--) cout << arr[i] << ' ';                
        }
        cout << '\n';
    }
    return 0;
}
