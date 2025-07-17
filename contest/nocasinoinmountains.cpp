#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int cunt=0;
        int ans=0;
        
        for(int i=0; i<n; i++){
            
            cunt=0;
            int k2=k;
            while(k2--&&i<n){
                if(a[i]==0){
                    i++;
                    cunt++;
                    
                }
                else{
                    
                    continue;
                }
                
            }
            if(cunt==k){
                ans++;
            }
            
        }
        cout<<ans<<endl;
    }
}