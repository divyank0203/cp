#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ncount=0;
        ll sum=0;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<0){
                ncount++;
                a[i]*=-1;
            }
            sum+=a[i];

        }

        sort(a.begin(), a.end());
        
        if(ncount%2==0){
            
            
            cout<<sum<<endl;
        }
        else{
           
            cout<<(sum-2*a[0])<<endl;
        }

        
    }
}