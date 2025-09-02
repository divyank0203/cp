#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<vector<ll>> a(n, vector<ll>(n));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        ll c=0;
        bool flag = true;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
               
                if(a[i][j]!=a[n-i-1][n-j-1]){
                    // cout<<"i "<<i<<" j "<<j<<endl;
                    // a[i][j]=a[n-i-1][n-j-1];
                    c++;
                    // cout<<"c "<<c<<endl;

                }
            }
            
        }
        c/=2;
        if(c<=k&&n%2==1){
            flag=true;
        }
        else if(c<=k&&n%2==0){
            if((n-c)%2==0){
                flag=true;
            }
            else{
                flag=false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}