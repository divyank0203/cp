#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        bool flag=false;
        ll in=0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i]!=0){
                in=i;
                flag=true;
            }
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        // vector<pair<ll, ll>> v(n);
        // for(ll i=0; i<n; i++){
        //     v[i].first = a[i];
        //     v[i].second=i;
        // }
        //  sort(v.begin(), v.end());
        // vector<ll> ans(3);
        // ll i=0; ll j=1; ll k=2;
        // for(ll c=0; c<n; c++){
        //     if()
        // }
        if(in>0&&in<(n-1)){
            if(a[in-1]+a[in]!=a[in+1]){
                cout<<in<<" "<<in+1<<" "<<in+2<<endl;
                continue;
            }
            else if(a[in-1]+a[in+1]!=a[in]){
                cout<<(in)<<" "<<in+2<<" "<<in+1<<endl;
                continue;
            }
            else if(a[in]+a[in+1]!=a[in-1]){
                cout<<in+1<<" "<<in+2<<" "<<in<<endl;
                continue;
                
        }
    }
        else if(in==0){
            if(a[0]+a[1]!=a[2]){
                cout<<1<<" "<<2<<" "<<3<<endl;
                continue;
            }
            else if(a[0]+a[2]!=a[1]){
                cout<<1<<" "<<3<<" "<<2<<endl;
                continue;
            }
            else if(a[1]+a[2]!=a[0]){
                cout<<2<<" "<<3<<" "<<1<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(in==(n-1)){
            if(a[n-1]+a[n-2]!=a[n-3]){
                cout<<n<<" "<<n-1<<" "<<n-2<<endl;
                continue;
            }
            else if(a[n-1]+a[n-3]!=a[n-2]){
                cout<<n<<" "<<n-2<<" "<<n-1<<endl;
                continue;
            }
            else if(a[n-2]+a[n-3]!=a[n-1]){
                cout<<n-1<<" "<<n-2<<" "<<n<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
}