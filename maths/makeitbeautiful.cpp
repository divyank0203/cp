#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n; 
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<ll > ans(n+1);
        ll i=0; ll j=n-1;
        ll m=0;
        while(i<=j){
            ans[m]=a[j];
            j--;
            m++;
            ans[m]=a[i];
            i++;
            m++;
        }
        ll ans2=ans[0];
        bool flag=true;
        for(ll k=1; k<n; k++){
            if(ans2==ans[k]){
                flag=false;
                break;
            }
            ans2+=ans[k];
        }
        if(flag){
            cout<<"YES"<<endl;
            for(ll k=0; k<n; k++){
                cout<<ans[k]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}