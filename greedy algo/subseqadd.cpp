#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> c(n);
        for(ll i=0; i<n; i++){
            cin>>c[i];
        }
        bool flag = false;
        sort(c.begin(), c.end());
        ll sum=0;
        for(ll i=0; i<n; i++){
            if(i==0){
                if(c[i]!=1){
                    flag = true;
                    break;
                }
                else{
                    sum+=c[i];
                }
            }
            else{
                if(sum<c[i]){
                    flag = true;
                    break;
                }
                else{
                    sum+=c[i];
                }
                
            }
            
            
        }
        if(flag==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
}
}